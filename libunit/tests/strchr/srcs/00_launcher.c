#include "strchr_test.h"

int		strchr_launcher(void)
{
	t_unit_test *testlist;

	testlist = NULL;
	unit_putstr("## STRCHR TEST ##\n");
	load_test(&testlist, "01_test_basic", &strchr_test_basic);
	load_test(&testlist, "02_null_test", &strchr_null_test);
	load_test(&testlist, "03_bad_str.c", &strchr_bad_str);
	load_test(&testlist, "04_empty_str.c", &strchr_empty_str);
	load_test(&testlist, "05_not_found_str.c", &strchr_not_found_str);
	return (exec_test(&testlist));
}
