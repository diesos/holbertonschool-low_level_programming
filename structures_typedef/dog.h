#ifndef DOG_H
# define DOG_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/**
 * struct dog - Dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * This structure help identify dog name, age & owner
 */
struct		dog
{
	char	*name;
	float	age;
	char	*owner;
};

#endif
