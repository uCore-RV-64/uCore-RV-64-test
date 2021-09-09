#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/// 辅助测例，运行所有其他测例。

char *TESTS[] = {
	"ch2b_hello_world\0", "ch2b_power\0",	  "ch2b_write1\0",
	"ch3b_sleep\0",	      "ch3b_sleep1\0",	  "ch3b_yield0\0",
	"ch3b_yield1\0",      "ch3b_yield2\0",	  "ch5b_forktest0\0",
	"ch5b_forktest1\0",   "ch5b_forktest2\0", "ch6b_pipetest\0",
	"ch7b_filetest\0",
};

int main()
{
	int num_test = sizeof(TESTS) / sizeof(char *);
	int succ = run_tests(TESTS, num_test);
	assert(succ == num_test);
	puts("ch7b Usertests passed!");
	return 0;
}