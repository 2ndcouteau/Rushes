#include "strchr_test.h"
#include <string.h>

int		strchr_not_found_str(void)
{
	if (ft_strchr("coucou", 'T') == strchr("coucou", 'T'))
		return (0);
	else
		return (1);
}
