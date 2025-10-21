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
	printf("s : %s\n", (char *)memchr((const void *)str, n, 5));
	printf("ft_s : %s\n", (char *)ft_memchr((const void *)str, n, 5));
	if (ft_memchr((const void *)"12", 125, 2) != memchr((const void *)"12", 125,
			2) || (char *)ft_memchr((const void *)"123456", 48 + 6,
			6) != (char *)memchr((const void *)"123456", 48 + 6, 6)
		|| (char *)ft_memchr((const void *)"", 0,
			0) != (char *)memchr((const void *)"", 0, 0)
		|| (char *)ft_memchr((const void *)"1", 48 + 1,
			1) != (char *)memchr((const void *)"1", 48 + 1, 1)
		|| (char *)ft_memchr((const void *)"12345678", 48 + 5,
			8) != (char *)memchr((const void *)"12345678", 48 + 5, 8))
	{
		printf("Error in ft_memchr Function ❌\n");
	}
	else
	{
		printf("ft_memchr Function is Correct ✅\n");
	}
	free(str);
}
