#ifndef LIBFT_H
#define LIBFT_H


#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	ft_memcpy(void *dst,const void *src, size_t n);
void	*ft_memset(void *buf,int ch,size_t n);
void	ft_bzero(void *s, size_t n);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
size_t ft_strlcpy(char *dst,const char *src,size_t dstsize);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strrchr(const char *s,int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
