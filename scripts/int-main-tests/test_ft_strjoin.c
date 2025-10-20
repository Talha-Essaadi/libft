#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "12345";
	s2 = "6789";
	s3 = ft_strjoin(s1, s2);
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf("s3 : %s\n", s3);
	printf("c : %c\n", ft_strjoin("", "1")[0]);
	if (s3[9] != '\0' || ft_strncmp(s3, "123456789", 10) != 0 || ft_strjoin("",
			"")[0] != '\0' || ft_strjoin("1", "")[0] != '1' || ft_strjoin("",
			"1")[0] != '1' || ft_strjoin("1", "")[1] != '\0'
		|| ft_strjoin("ABC", "E")[3] != 'E')
	{
		printf("Error in ft_strjoin Function ❌\n");
	}
	else
	{
		printf("ft_strjoin Function is Correct ✅\n");
	}
	free(s3);
}
