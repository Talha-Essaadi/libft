#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		n;

	str = (char *)malloc(20);
	ft_strlcpy(str, "12A34", 20);
	str[2] = 125;
	n = 125;
	printf("s 12: %s\n", strrchr((const char *)str, n));
	printf("ft_s 12: %s\n", ft_strrchr((const char *)str, n));
	n = 125;
	printf("s : %s\n", strrchr((const char *)"12", n));
	printf("ft_s : %s\n", ft_strrchr((const char *)"12", n));
	if (ft_strrchr((const char *)"12", 125) != strrchr((const char *)"12", 125)
		|| ft_strrchr((const char *)"123456", 48
			+ 6) != strrchr((const char *)"123456", 48 + 6)
		|| ft_strrchr((const char *)"", 0) != strrchr((const char *)"", 0)
		|| ft_strrchr((const char *)"1", 48 + 1) != strrchr((const char *)"1",
			48 + 1) || ft_strrchr((const char *)"12345678", 48
			+ 5) != strrchr((const char *)"12345678", 48 + 5))
	{
		printf("Error in ft_strrchr Function ❌\n");
	}
	else
	{
		printf("ft_strrchr Function is Correct ✅\n");
	}
	free(str);
}
