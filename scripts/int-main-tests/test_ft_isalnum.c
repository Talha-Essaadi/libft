#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf(" 0 : %d\n", isalnum('0'));
	printf(" B : %d\n", isalnum('B'));
	printf(" } : %d\n", isalnum('}'));
	if (ft_isalnum('a') != isalnum('a') || ft_isalnum('z') != isalnum('z')
		|| ft_isalnum('A') != isalnum('A') || ft_isalnum('Z') != isalnum('Z')
		|| ft_isalnum('}') != isalnum('}') || ft_isalnum(255) != isalnum(255)
		|| ft_isalnum(256) != isalnum(256) || ft_isalnum(2147483647) != 0
		|| ft_isalnum(-2147483648) != 0 || ft_isalnum('0') != isalnum('0')
		|| ft_isalnum('9') != isalnum('9'))
	{
		printf("Error in ft_isalnum Function ❌\n");
	}
	else
	{
		printf("ft_isalnum Function is Correct ✅\n");
	}
}
