#include "strchr_test.h"
#include <string.h>

int		strchr_test_basic(void)
{
	if (ft_strchr("coucou", 'c') == strchr("coucou", 'c'))
		return (0);
	else
		return (-1);
}
