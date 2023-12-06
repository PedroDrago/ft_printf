#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putpointer(void *ptr);
int	ft_putnbr_base(int n, int base, int sign, char charset[]);
int	ft_retputstr(char *str);
int	ft_retputchar(char c);
int	ft_resolve_print(char c, va_list args);
int	ft_printf(const char *str, ...);

#endif
