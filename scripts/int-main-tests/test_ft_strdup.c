#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	if (ft_strncmp((const char *)ft_strdup("123456789"),
			(const char *)"123456789", 9) != 0
		|| ft_strncmp((const char *)ft_strdup("123456789"),
			(const char *)"123456789", 10) != 0
		|| ft_strncmp((const char *)ft_strdup(""), (const char *)"", 10) != 0
		|| ft_strncmp((const char *)ft_strdup("1"), (const char *)"1", 1) != 0)
	{
		printf("Error in ft_strdup Function ❌\n");
	}
	else
	{
		printf("ft_strdup Function is Correct ✅\n");
	}
}
