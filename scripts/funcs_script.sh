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


