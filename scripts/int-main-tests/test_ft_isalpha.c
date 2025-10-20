#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("a : %d\n", isalpha('a'));
	printf("a : %d\n", isalpha('}'));
	if (ft_isalpha('a') != isalpha('a') || ft_isalpha('z') != isalpha('z')
		|| ft_isalpha('A') != isalpha('A') || ft_isalpha('Z') != isalpha('Z')
		|| ft_isalpha('}') != isalpha('}') || ft_isalpha(255) != isalpha(255)
		|| ft_isalpha(256) != isalpha(256) || ft_isalpha(2147483647) != 0
		|| ft_isalpha(-2147483648) != 0)
	{
		printf("Error in ft_isalpha Function ❌\n");
	}
	else
	{
		printf("ft_isalpha Function is Correct ✅\n");
	}
}
