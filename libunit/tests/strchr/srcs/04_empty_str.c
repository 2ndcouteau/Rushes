#include "strchr_test.h"
#include <string.h>

int		strchr_empty_str(void)
{
	if (ft_strchr("", 'c') == strchr("", 'c'))
		return (0);
	else
		return (1);
}
