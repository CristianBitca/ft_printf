
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);
int	ft_putchr(int c);
int	ft_putstr(char *str);
char	*ft_itoa(int n);
int	ft_count_int(int num);
int	ft_putnbr(int n);
void	*ft_calloc(size_t n, size_t size);
char	*ft_unsigneditoa(unsigned int n);
int	ft_count_unsignedint(unsigned int num);
int	ft_unsigned(unsigned int n);

#endif