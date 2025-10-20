
# Check protoType :

s1="int	ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
char	*ft_itoa(int n);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int	ft_lstsize(t_list *lst);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_tolower(int c);
int	ft_toupper(int c);
"

s2=$(cat *.c | awk '$2 ~  /ft_/' | grep -v "\.c" | grep -v "return" | awk '!/if/' | sort -k 2| sed 's/$/;/g')

echo $s1 > tmp1.txt
echo $s2 > tmp2.txt

s3=$(diff tmp1.txt tmp2.txt)

echo $s3
if [ -z "$s3" ]; then
	echo "Functions Prototype are Correct ✅"
else
	echo "Functions Protottype are not correct ❌"
fi

# Check functions name :

funcs="ft_atoi
ft_bzero
ft_calloc
ft_isalnum
ft_isalpha
ft_isascii
ft_isdigit
ft_isprint
ft_itoa
ft_lstadd_back_bonus
ft_lstadd_front_bonus
ft_lstclear_bonus
ft_lstdelone_bonus
ft_lstiter_bonus
ft_lstlast_bonus
ft_lstmap_bonus
ft_lstnew_bonus
ft_lstsize_bonus
ft_memchr
ft_memcmp
ft_memcpy
ft_memmove
ft_memset
ft_putchar_fd
ft_putendl_fd
ft_putnbr_fd
ft_putstr_fd
ft_split
ft_strchr
ft_strdup
ft_striteri
ft_strjoin
ft_strlcat
ft_strlcpy
ft_strlen
ft_strmapi
ft_strncmp
ft_strnstr
ft_strrchr
ft_strtrim
ft_substr
ft_tolower
ft_toupper
"

str=$(ls *.c | sed 's/\.c//g' | sort)

echo $funcs > tmp1.txt
echo $str > tmp2.txt

s3=$(diff tmp1.txt tmp2.txt)

echo $s3
if [ -z "$s3" ]; then
	echo "Functions Name are Correct ✅"
else
	echo "Functions Name are not correct ❌"
fi

# delete hidden files :

find . -maxdepth 1 -type f -name ".*" -delete

echo "hidden files deleted ✅"

# Check Header files :

s4='#include "libft.h"
# include <stdlib.h>
# include <string.h>
# include <unistd.h>'

s5=$(cat *.c *.h | grep include | uniq | sort)

echo $s4 > tmp1.txt
echo $s5 > tmp2.txt

s6=$(diff tmp1.txt tmp2.txt)

echo $s5
if [ -z $s6 ]; then
        echo "Headers are Correct ✅"
else
        echo "Headers are not correct ❌"
fi


# check norminette

s6=$(norminette | grep Error)
echo $s6
if [ -z "$s6" ]; then
        echo "norminette is Correct ✅"
else
        echo "norminette is not correct ❌"
fi

# check printf :

s7=$(cat * | grep printf)

echo $s6
if [ -z "$s6" ]; then
        echo "printf Not Found ! ✅"
else
        echo "Found printf ❌"
fi

# Check Forbidden :

s6=$(cat Makefile | grep wildcard)

if [ -z "$s6" ]; then
        echo "wildcard Not Found ! ✅"
else
        echo "Found wildcard ❌"
fi


rm  tmp2.txt  tmp1.txt
