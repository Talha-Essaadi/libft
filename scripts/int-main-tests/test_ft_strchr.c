#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		n;

	str = (char *)malloc(20);
	ft_strlcpy(str, "12A34", 20);
	n = 82241;
	printf("s : %s\n", strchr((const char *)str, n));
	printf("ft_s : %s\n", ft_strchr((const char *)str, n));
	if (ft_strchr((const char *)"12", 125) != strchr((const char *)"12", 125)
		|| ft_strchr((const char *)"123456", 48
			+ 6) != strchr((const char *)"123456", 48 + 6)
		|| ft_strchr((const char *)"", 0) != strchr((const char *)"", 0)
		|| ft_strchr((const char *)"1", 48 + 1) != strchr((const char *)"1", 48
			+ 1) || ft_strchr((const char *)"12345678", 48
			+ 5) != strchr((const char *)"12345678", 48 + 5))
	{
		printf("Error in ft_strchr Function ❌\n");
	}
	else
	{
		printf("ft_strchr Function is Correct ✅\n");
	}
	free(str);
}
