#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	**s3;
	int		i;

	s1 = "   12345 123456    1234567   12      ";
	s3 = ft_split("   12345 123456    1234567   12      ", ' ');
	printf("s3 : %s\n", s3[0]);
	printf("%d\n", ft_strncmp(s3[0], "12345", 5));
	if (s3[4] != NULL || ft_strncmp(s3[0], "12345", 5) != 0 || ft_strncmp(s3[1],
			"123456", 6) != 0 || ft_strncmp(s3[2], "1234567", 7) != 0
		|| ft_strncmp(s3[3], "12", 2) != 0 || s3[0][5] != '\0'
		|| s3[1][6] != '\0' || s3[2][7] != '\0' || s3[3][2] != '\0'
		|| s3[4] != NULL || ft_split("", '\0')[0] != NULL || ft_split("1",
			'\0')[0][0] != '1' || ft_split("1", '\0')[0][1] != '\0'
		|| ft_split("", '1')[0] != NULL || ft_split("12", '\0')[0][2] != '\0'
		|| ft_split("ABC", 'E')[0][2] != 'C')
	{
		printf("Error in ft_split Function ❌\n");
	}
	else
	{
		printf("ft_split Function is Correct ✅\n");
	}
	i = 0;
	while (s3[i] != NULL)
	{
		free(s3[i]);
		i++;
	}
	free(s3);
}
