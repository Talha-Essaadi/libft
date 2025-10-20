#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("2147483647 : %d\n", atoi("		2147483647abc"));
	printf("-2147483648 : %d\n", ft_atoi("		-2147483648abv4443"));
	if (ft_atoi("  -123abc") != atoi("  -123abc")
				|| ft_atoi("   2147483647abc") != atoi("   2147483647abc")
				|| ft_atoi("  -2147483648abc") != atoi("  -2147483648abc")
				|| ft_atoi("123abc") != atoi("123abc") || ft_atoi("   +-123abc    ")
				!= atoi("    +-123abc    ")
				|| ft_atoi("  	255") != atoi("  	255") || ft_atoi("  	- 1234")
				!= atoi("   - 1234")
				|| ft_atoi("2147483647") != atoi("2147483647")
				|| ft_atoi("-2147483648") != atoi("-2147483648")
				|| ft_atoi("    ---000") != atoi("         ---000")
				|| ft_atoi("") != atoi(""))
	{
		printf("Error in ft_atoi Function ❌\n");
	}
	else
	{
		printf("ft_atoi Function is Correct ✅\n");
	}
}
