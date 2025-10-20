#include "libft.h"
#include <ctype.h>
#include <stdio.h>

void	t_ft_toupper(unsigned int i, char *c)
{
	char	letter;

	i = 0;
	if (ft_isascii(*c) == 0)
		return ;
	letter = (char)*c;
	if (letter >= 'a' && letter <= 'z')
		*c = *c - 32;
}

int	main(void)
{
	char	s1[] = "abcde";
	char	s2[] = "a";
	char	s3[] = "";

	;
	ft_striteri(s1, t_ft_toupper);
	ft_striteri(s2, t_ft_toupper);
	ft_striteri(s2, t_ft_toupper);
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf("s3 : %s\n", s3);
	if (ft_strncmp(s1, "ABCDE", 5) != 0 || s1[5] != '\0' || ft_strncmp(s2, "A",
			1) != 0 || s2[1] != '\0' || ft_strncmp(s3, "", 1) != 0
		|| s3[0] != '\0')
	{
		printf("Error in ft_striteri Function ❌\n");
	}
	else
	{
		printf("ft_striteri Function is Correct ✅\n");
	}
}
