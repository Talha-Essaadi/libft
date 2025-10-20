#!/bin/bash
make bonus
# Part I

# isalpha :
cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_isalpha.c libft.a && ./a.out

# isdigit :
cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_isdigit.c libft.a && ./a.out

# isalnum :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_isalnum.c libft.a && ./a.out

# isascii :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_isascii.c libft.a && ./a.out

# isprint :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_isprint.c libft.a && ./a.out

# strlen :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_strlen.c libft.a && ./a.out

# toupper :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_toupper.c libft.a && ./a.out

# tolower

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_tolower.c libft.a && ./a.out

# strncmp :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_strncmp.c libft.a && ./a.out

# atoi :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_atoi.c libft.a && ./a.out

# memcmp :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_memcmp.c libft.a && ./a.out

# memcpy :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_memcpy.c libft.a && ./a.out

# calloc :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_calloc.c libft.a && ./a.out

# strlcpy :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_strlcpy.c libft.a && ./a.out

# strlcat :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_strlcat.c  libft.a && ./a.out

# strchr :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_strchr.c libft.a && ./a.out

# strrchr :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_strrchr.c libft.a && ./a.out

# strnstr :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_strnstr.c libft.a && ./a.out

# strdup :

cc -Wall -Wextra -Werror  test_ft_strdup.c libft.a && ./a.out

# bzero :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_bzero.c libft.a && ./a.out

# memset :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_memset.c libft.a && ./a.out

# memchr : 

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_memchr.c libft.a && ./a.out

# calloc :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_calloc.c libft.a && ./a.out

# memmove :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_memmove.c libft.a && ./a.out


# Part II

# ft_substr :

cc -Wall -Wextra -Werror  test_ft_substr.c libft.a && ./a.out

# ft_putstr_fd

cc -Wall -Wextra -Werror  test_ft_putstr_fd.c libft.a && ./a.out 

# ft_putchar_fd

cc -Wall -Wextra -Werror  test_ft_putchar_fd.c  libft.a && ./a.out



# ft_strjoin :

cc -Wall -Wextra -Werror  test_ft_strjoin.c libft.a && ./a.out


# ft_split : 

cc -Wall -Wextra -Werror  test_ft_split.c libft.a && ./a.out


# ft_itoa :

cc -Wall -Wextra -Werror  test_ft_itoa.c libft.a && ./a.out

# ft_strtrim :

cc -Wall -Wextra -Werror  test_ft_strtrim.c libft.a && ./a.out

# ft_strtrim :

cc -Wall -Wextra -Werror  test_ft_strmapi.c libft.a && ./a.out

# ft_iteriti :

cc -Wall -Wextra -Werror -fsanitize=address -g3 test_ft_striteri.c libft.a && ./a.out

# ft_lstnew :

cc -Wall -Wextra -Werror  test_ft_lstnew_bonus.c  libft.a && ./a.out

# ft_lstadd_front ft_lstadd_back ft_lstsize : 

cc -Wall -Wextra -Werror -fsanitize=address -g3  -fsanitize=address -g3 -g  test_ft_lstadd_front_bonus.c test_ft_lstadd_back_bonus.c test_ft_lstsize_bonus.c test_ft_lstlast_bonus.c  test_ft_lstiter_bonus.c test_ft_lstmap_bonus.c test_ft_lstclear_bonus.c   test_ft_lstdelone_bonus.c libft.a &&  ./a.out

rm -rf tmp a.out
make fclean
