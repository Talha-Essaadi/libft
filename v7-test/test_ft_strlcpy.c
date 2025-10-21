#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	int		len;

	str = (char *)malloc(20);
	len = ft_strlcpy(str, (const char *)"12345678901234567890", 20);
	printf("len : %d\n", len);
	// char *s = "abcdef";
	// char *e = ;
	// if(ft_strlcpy(s, ))
	if (ft_strlcpy(str, (const char *)"123456789", 20) != 9 || str[9] != '\0'
		|| ft_strlcpy(str, (const char *)"12345678901234567890", 20) != 20
		|| str[19] != '\0' || ft_strlcpy(str, (const char *)"", 20) != 0
		|| ft_strlcpy(str, (const char *)"1", 20) != 1 || str[1] != '\0')
	{
		printf("Error in ft_strlcpy Function ❌\n");
	}
	else
	{
		printf("ft_strlcpy Function is Correct ✅\n");
	}
	free(str);
}
