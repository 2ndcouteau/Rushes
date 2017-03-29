#include "strchr_test.h"
#include <string.h>

int		strchr_null_test(void)
{
	if (ft_strchr(NULL, 'c') == strchr(NULL, 'c'))
		return (0);
	else
		return (-1);
}
