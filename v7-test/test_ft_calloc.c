#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	*ptr;

	ptr = (int *)ft_calloc(0, sizeof(int));
	if (ptr == NULL)
	{
		printf("Error in ft_calloc Function ❌\n");
	}
	else
	{
		printf("ft_calloc Function is Correct ✅\n");
		free(ptr);
	}
}
