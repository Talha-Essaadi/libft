#include "libft.h"
#include <ctype.h>
#include <stdio.h>

void	ft_display_lst(t_list *head)
{
	t_list	*acc;

	acc = head;
	while (acc != NULL)
	{
		printf("content : %s\n", (char *)acc->content);
		acc = acc->next;
	}
}

void	ft_add_lst_front(char *s, t_list **head)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return ;
	printf("f_node : %p\n", node);
	node->content = (void *)s;
	node->next = NULL;
	printf("here 2\n");
	ft_lstadd_front(head, node);
}

void	ft_add_lst_back(char *s, t_list **head)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return ;
	printf("b_node : %p\n", node);
	node->content = (void *)s;
	node->next = NULL;
	printf("here 2\n");
	ft_lstadd_back(head, node);
}

void	t_ft_toupper(void *s)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
}

void	*t_ft_tolower(void *s)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (s);
}
void	ft_del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head;
	t_list	*head2;
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;
	char	*s6;
	t_list	*acc;
	t_list	*prev;

	head = NULL;
	printf("last node : %s\n", (char *)ft_lstlast(head));
	s1 = ft_strdup("abcdef");
	printf("size : %d\n", ft_lstsize(head));
	ft_add_lst_back(s1, &head);
	printf("last node : %s\n", (char *)ft_lstlast(head)->content);
	printf("size : %d\n", ft_lstsize(head));
	s2 = ft_strdup("");
	s3 = ft_strdup("1");
	s4 = ft_strdup("12");
	ft_add_lst_back(s2, &head);
	ft_add_lst_back(s3, &head);
	ft_add_lst_back(s4, &head);
	printf("here 1\n");
	ft_display_lst(head);
	printf("UPDATE :\n");
	s5 = ft_strdup("1eeeEc2");
	ft_add_lst_back(s5, &head);
	printf("size : %d\n", ft_lstsize(head));
	s6 = ft_strdup("Front is Work");
	ft_add_lst_front(s6, &head);
	ft_display_lst(head);
	printf("size : %d\n", ft_lstsize(head));
	printf("last node : %s\n", (char *)ft_lstlast(head)->content);
	printf("\n\nft_lstiter : \n");
	ft_lstiter(head, t_ft_toupper);
	ft_display_lst(head);
	printf("\n\nft_lstmp : \n");
	head2 = ft_lstmap(head, t_ft_tolower, t_ft_toupper);
	printf("\nprevios : \n");
	ft_display_lst(head);
	printf("\nupdated : head2\n");
	ft_display_lst(head2);
	printf("\n\nft_lstclear : \n");
	acc = head;
	while (acc != NULL)
	{
		prev = acc->next;
		printf("head1_node : %p\n", acc);
		free(acc);
		acc = prev;
	}
	ft_lstclear(&head2, ft_del);
	// ft_lstclear(&head,ft_del);
	// printf("\n\nft_lstclear : %s\n", (char *)head2);
	/*
	if (ft_strncmp((char *)ft_lstnew((void *)"123456789")->content ,
			"123456789", 10) != 0
			|| ft_lstnew((void *)"123456789")->next != NULL
			|| ft_strncmp((char *)ft_lstnew((void *)"")->content , "", 10) != 0
			|| ft_lstnew((void *)"")->next != NULL
			|| ft_lstnew(NULL) != NULL)
	{
		printf("Error in ft_lstadd_front Function ❌\n");
	}
	else
	{
		printf("ft_lstadd_front Function is Correct ✅\n");
	}
	*/
	printf("s1 : %p\n", s1);
	printf("s1 : %p\n", s2);
	printf("s1 : %p\n", s3);
	printf("s1 : %p\n", s4);
	printf("s1 : %p\n", s5);
	printf("s1 : %p\n", s6);
	/*
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	free(s5);
	free(s6);*/
}
