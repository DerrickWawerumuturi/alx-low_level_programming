#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains data types
 * @name:first item
 * @age:second item
 * @owner: third item
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
