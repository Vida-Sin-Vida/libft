#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int ft_atoi(const char *str);

void    ft_bzero(void *s, size_t n);

void    *ft_calloc(size_t count, size_t size);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

int		ft_strcmp(const char *s1, const char *s2);

char	*ft_strdup(const char *s1);

size_t	ft_strlen(const char *s);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif