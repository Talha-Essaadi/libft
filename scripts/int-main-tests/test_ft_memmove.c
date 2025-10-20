#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	typedef struct s_node {
		int	x;
		char c;
		char	*str;
	}	t_node;
	char	*s1;
	char	*s2;
	char	*s3;
	t_node	var;
	t_node	var2;
	t_node	*ptr1;
	t_node	*ptr2;
	void	*p1;
	void	*p2;

	var.str = "123456789";
	var.c = 'K';
	var2.c = 'M';
	bzero((void *)&var, sizeof(t_node));
	bzero((void *)&var2, sizeof(t_node));
	var.x = 9;
	var2.x = 1999;
	p1 = (void *)malloc(sizeof(t_node));
	p2 = (void *)malloc(sizeof(t_node));
	p1 = ft_memmove(p1, (const void *)&var, sizeof(t_node));
	p2 = ft_memmove(p2, (const void *)&var2, sizeof(t_node));
	ptr1 = (t_node *)p1;
	ptr2 = (t_node *)p2;
	printf("p1->x : %d\n", ptr1->x);
	printf("p2->x : %d\n", ptr2->x);
	// No overlap
	if (ptr1->x != var.x || ptr1->c != var.c || ptr1->str != var.str
		|| ptr2->x != var2.x || ptr2->c != var2.c || ptr2->str != var2.str)
	{
		printf("Error in ft_memmove Function in No overlap ❌\n");
	}
	else
	{
		printf("ft_memmove Function is Correct in No overlap ✅\n");
	}
	// overlap
	s1 = (char *)malloc(20);
	s3 = (char *)malloc(20);
	ft_strlcpy(s1, "123456789", 10);
	ft_strlcpy(s3, s1, 10);
	printf("s1 : %s\n", s1);
	printf("s3 : %s\n", s3);
	ft_memmove(s1 + 3, s1, 10);
	s2 = s1 + 3;
	printf("s2 = s1+3: %s\n", s2);
	printf("s1 : %s\n", s1);
	if (ft_strncmp(s2, s3, 10) != 0)
	{
		printf("Error in ft_memmove Function in overlap❌\n");
	}
	else
	{
		printf("ft_memmove Function is Correct in overlap ✅\n");
	}
	free(p1);
	free(p2);
	free(s1);
	free(s3);
}
