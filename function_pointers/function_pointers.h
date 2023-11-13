#ifndef FUNCTION_POINTERS_H
# define FUNCTION_POINTERS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	print_name(char *name, void (*f)(char *));
void	print_name_as_is(char *name);
void	print_name_uppercase(char *name);

#endif
