#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	if (ft_strncmp((char *)ft_lstnew((void *)"123456789")->content, "123456789",
			10) != 0 || ft_lstnew((void *)"123456789")->next != NULL
		|| ft_strncmp((char *)ft_lstnew((void *)"")->content, "", 10) != 0
		|| ft_lstnew((void *)"")->next != NULL || ft_lstnew(NULL) != NULL)
	{
		printf("Error in ft_lstnew Function ❌\n");
	}
	else
	{
		printf("ft_lstnew Function is Correct ✅\n");
	}
}
