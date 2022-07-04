#ifndef LIBFT_H
# define LIBFT_H

// Fonction allocation memoire 1
void    *ft_calloc(size_t n, size_t size);

void	*ft_memalloc(size_t size);

// Fonction gestion tableau 2
void	ft_rev_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size);

// Fonction gestion zone memoire 6
void    *ft_memset(void *src, int value, size_t count);

void    *ft_memcpy(void *dest, const void *src, size_t size);

void    *ft_memccpy(void *dest, const void *src, int c, size_t n);

void    *ft_memmove(void *dest, const void *src, size_t n);

void    *ft_memchr(const void *memoryBlock, int searchedChar, size_t size);

int     ft_memcmp(const void *pointeur1, const void *pointeur2, size_t size);

// Fonction utilitaire 4
void    ft_bzero(void *src, size_t n);

void	ft_swap(int *a, int *b);

char	*ft_itoa(int num);

int     ft_atoi(char *str);

int     ft_strlen(char *str);

// Fonction traitement de str 12
size_t  ft_strlcpy(char *dest, const char *src, size_t destsize);

size_t  ft_strlcat(char *dest, const char *src, size_t srcsize);

char	*ft_strcat(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src);

char    *ft_strchr(const char *string, int searchedChar);

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));

char    *ft_strrchr(const char *string, int searchedChar);

char    *ft_stnstr(const char *str, const char *to_find, size_t size);

char    *ft_substr(const char *str, int offset, size_t size);

char	**ft_split(char const *str, char c);

char	*ft_strstr(char *str, char *to_find);

char    *ft_strdup(const char *src);

char    *strtrim(char *str);

char	*ft_strnew(size_t size);

char	*ft_strjoin(char const *s1, char const *s2);

int     ft_strcmp(char *s1, char *s2);

int     ft_strncmp(char *s1, char *s2, size_t n);

// Fonction mathématique 6
int     ft_fibonacci(int index);

int     ft_is_prime(int nb);

int     ft_find_next_prime(int nb);

int     ft_factorial(int nb);

int     ft_power(int nb, int power);

int     ft_sqrt(int nb);

// Fonction verification ascii 6
int     ft_isalpha(char c);

int     ft_isdigit(char c);

int     ft_isdigit(char c);

int     ft_isascii(char c);

int     ft_isprint(char c);

int     ft_isspace(char c);

// Fonction modif alpha 2
char    ft_toupper(char c);

char    ft_tolower(char c);

// Fonction affichage 5
void	ft_putnbr_fd(int nb, int fd);

void	ft_putendl(char const *str, int fd);

void	ft_putendl(char const *str);

void    ft_putstr_fd(char const *str, int fd);

void    ft_putchar_fd(char c, int fd);

void    ft_putchar(char c);

void    ft_putstr(char *str);

char    ft_putnbr(int nb);

#endif

/*
Part 1
Finish

Part 2
Finish

Part Bonus
lstnew, lstadd_front, lstsize, lstlast,
lstadd_back, lstdelone, lstclear, lstiter, lstmap
*/