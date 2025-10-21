#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = (char *)malloc(20);
	ft_strlcpy(str, "1234", 20);
	if (ft_strlcat(str, (const char *)"12", 20) != 6 || ft_strlcat(str,
			(const char *)"1", 5) != 6 || ft_strlcat(str, (const char *)"",
			20) != 6 || ft_strlcat(str, (const char *)"1", 20) != 7
		|| ft_strlcat(str, (const char *)"12345678", 20) != 15)
	{
		printf("Error in ft_strlcat Function ❌\n");
	}
	else
	{
		printf("ft_strlcat Function is Correct ✅\n");
	}
	free(str);
}
