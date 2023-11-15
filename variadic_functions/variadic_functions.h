#ifndef MAIN_H
# define MAIN_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		sum_them_all(const unsigned int n, ...);
void	print_numbers(const char *separator, const unsigned int n, ...);

#endif
