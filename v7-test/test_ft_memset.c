#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	typedef struct s_node {

		int x;
		char *str;
		char c;
	 } t_node;

	t_node	a;
	t_node	b;

	a.x = 43434;
	b.x = 121223;
	a.c = 'A';
	b.c = 'Z';
	s1 = ft_strdup("123456789");
	s2 = ft_strdup("123456789");
	ft_memset((void *)s1, 82345, 9);
	memset((void *)s2, 82345, 9);
	ft_memset((void *)&a, 0, sizeof(t_node));
	memset((void *)&b, 0, sizeof(t_node));
	printf("s1 : %s\n", s1);
	printf("s2 : %s\n", s2);
	printf("condition : %d\n", ft_strncmp((const char *)s2, (const char *)s1,
			9));
	printf("condition : %d\n", ft_strncmp((const char *)&a, (const char *)&b,
			sizeof(t_node)));
	if (ft_strncmp((const char *)s2, (const char *)s1, 9) != 0
		|| ft_strncmp((const char *)&a, (const char *)&b, sizeof(t_node)) != 0)
	{
		printf("Error in ft_memset Function ❌\n");
	}
	else
	{
		printf("ft_memset Function is Correct ✅\n");
	}
	free(s1);
	free(s2);
}
