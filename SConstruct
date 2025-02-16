import os

VariantDir('build', 'src')
GTEST_HOME = '/usr/local'
GTEST_INCLUDE = os.path.join(GTEST_HOME, 'include')

testEnv = Environment(
    ENV = os.environ,
    CCFLAGS='-ggdb -Wall -I %s' % (GTEST_INCLUDE), 
    CFLAGS='-fprofile-arcs -ftest-coverage',
    LINKFLAGS='-fprofile-arcs -ftest-coverage',
    LIBPATH=GTEST_HOME,
    LIBS=['pthread', 'libgtest']
)

sources = ['build/add.c']
testSources = ['build/add_test.cc']

testProg = testEnv.Program('a.out', sources + testSources)
testReport = testEnv.Command('test_report.xml', testProg, "./a.out --gtest_output=xml:${TARGET}")
coverageReport = testEnv.Command('coverage.xml', testReport, "/home/tsu/mypy/bin/gcovr --gcov-ignore-errors=no_working_dir_found -x -r build -o ${TARGET}")

Default(coverageReport)
