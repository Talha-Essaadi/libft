#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("a : %d\n", toupper('a'));
	printf("} : %d\n", toupper('}'));
	if (ft_toupper('a') != toupper('a') || ft_toupper('z') != toupper('z')
		|| ft_toupper('A') != toupper('A') || ft_toupper('Z') != toupper('Z')
		|| ft_toupper('}') != toupper('}') || ft_toupper(255) != toupper(255)
		|| ft_toupper(256) != toupper(256)
		|| ft_toupper(2147483647) != 2147483647 || ft_toupper(-2147483648) !=
		-2147483648 || ft_toupper(1) != toupper(1)
		|| ft_toupper(0) != toupper(0) || ft_toupper(127) != toupper(127)
		|| ft_toupper(1) != toupper(1))
	{
		printf("Error in ft_toupper Function ❌\n");
	}
	else
	{
		printf("ft_toupper Function is Correct ✅\n");
	}
}
