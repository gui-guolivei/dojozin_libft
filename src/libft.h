#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>

int		ft_isdigit(int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strchr(const char* s, int c);
char * ft_strnstr(const char *big, const char *little, size_t len);
void    *ft_memchr(const void *s, int c, size_t n);
#endif
