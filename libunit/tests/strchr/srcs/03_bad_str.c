#include "strchr_test.h"
#include <string.h>

int		strchr_bad_str(void)
{
	char	str[10];
	int		cpt;

	cpt = 0;
	while (cpt < 10)
		str[cpt++] = 'T';
	if (ft_strchr(str, 'c') == strchr(str, 'c'))
		return (0);
	else
		return (1);
}
