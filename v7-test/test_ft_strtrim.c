#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "##!-__  #12345 ### 123456 ::__-- 1234567 ___--::#  12#   :: ##   ";
	s2 = "#!-__: ";
	printf("s1.len : %zu\n", ft_strlen(s1));
	s3 = ft_strtrim(s1, s2);
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf("s3 : %s\n", s3);
	printf("c : %s\n", ft_strtrim("##__--  123456789", s2));
	if (s3[44] != '\0' || ft_strncmp(ft_strtrim("##__--  123456789", s2),
			"123456789", 10) != 0 || ft_strtrim("", "")[0] != '\0'
		|| ft_strtrim("1", "")[0] != '1' || ft_strtrim("", "1")[0] != '\0'
		|| ft_strtrim("1", NULL)[0] != '1' || ft_strtrim(NULL, "4343") != NULL)
	{
		printf("Error in ft_strtrim Function ❌\n");
	}
	else
	{
		printf("ft_strtrim Function is Correct ✅\n");
	}
}
