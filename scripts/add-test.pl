#!/usr/bin/perl

if (scalar @ARGV == 2)
{
  $file = $ARGV[0];
  $file =~ s{\.[^.]+$}{}; # Remove extension

  $test = $ARGV[1];
  $headerFile = $file . ".h";
  $sourceFile = $file . ".cpp";
  $file =~ s{.*/}{}; # Remove path
  $className = $file;

  $decPlaceholder = '//NEXT_TEST_DEC';
  $addPlaceholder = '//NEXT_TEST_ADD';
  $defPlaceholder = '//NEXT_TEST_DEF';

  $decReplaceText = "void $test();\n    $decPlaceholder";
  $addReplaceText = "CPPUNIT_TEST( $test );\n    $addPlaceholder";
  $defReplaceText = "void $className\:\:$test()\n{\n  CPPUNIT_ASSERT_EQUAL(true, true);\n}\n\n$defPlaceholder";

  $tempHeaderfile = $headerFile . ".tmp";
  open(IS, $headerFile);
  open(OS, ">$tempHeaderfile");
  while(<IS>)
  {
    s/$decPlaceholder/$decReplaceText/gi;
    s/$addPlaceholder/$addReplaceText/gi;
    print OS;
  }
  close(IS);
  close(OS);
  unlink($headerFile);
  rename($tempHeaderfile, $headerFile);

  $tempSourcefile = $sourceFile . ".tmp";
  open(IS, $sourceFile);
  open(OS, ">$tempSourcefile");
  while(<IS>)
  {
    s/$defPlaceholder/$defReplaceText/gi;
    print OS;
  }
  close(IS);
  close(OS);
  unlink($sourceFile);
  rename($tempSourcefile, $sourceFile);

}
else
{
  print 'Usage UnitTest.cpp|.h testName';
}
