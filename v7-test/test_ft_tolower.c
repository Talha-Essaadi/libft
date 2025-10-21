#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("a : %d\n", tolower('a'));
	printf("} : %d\n", tolower('}'));
	if (ft_tolower('a') != tolower('a') || ft_tolower('z') != tolower('z')
		|| ft_tolower('A') != tolower('A') || ft_tolower('Z') != tolower('Z')
		|| ft_tolower('}') != tolower('}') || ft_tolower(255) != tolower(255)
		|| ft_tolower(256) != tolower(256)
		|| ft_tolower(2147483647) != 2147483647 || ft_tolower(-2147483648) !=
		-2147483648 || ft_tolower(1) != tolower(1)
		|| ft_tolower(0) != tolower(0) || ft_tolower(127) != tolower(127)
		|| ft_tolower(1) != tolower(1))
	{
		printf("Error in ft_tolower Function ❌\n");
	}
	else
	{
		printf("ft_tolower Function is Correct ✅\n");
	}
}
