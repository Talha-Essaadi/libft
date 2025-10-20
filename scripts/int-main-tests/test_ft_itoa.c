#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = ft_itoa(2147483647);
	s2 = ft_itoa(-0);
	s3 = ft_itoa(-2147483648);
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf("s3 : %s\n", s3);
	printf("c : %c\n", ft_itoa(-1)[0]);
	if (s3[11] != '\0' || ft_strncmp(s3, "-2147483648", 11) != 0
		|| ft_itoa(0)[0] != '0' || ft_itoa(-1)[0] != '-'
		|| ft_itoa(-1)[1] != '1' || ft_itoa(-1)[2] != '\0'
		|| ft_itoa(1337)[4] != '\0' || ft_strncmp(ft_itoa(2147483647),
			"2147483647", 10) != 0 || ft_strncmp(ft_itoa(0), "0", 10) != 0
		|| ft_strncmp(ft_itoa(-1337), "-1337", 10) != 0
		|| ft_strncmp(ft_itoa(1), "1", 10) != 0 || ft_strncmp(ft_itoa(1337),
			"1337", 10) != 0)
	{
		printf("Error in ft_itoa Function ❌\n");
	}
	else
	{
		printf("ft_itoa Function is Correct ✅\n");
	}
}
