#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog basic information
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *dd);
typedef struct dog dog_tt;
dog_tt *new_dog(char *name, float age, char owner);
void free_dog(dog_tt *dd);
char *_strcpy(char *dest, char *src);
int _strlen(char *v);

#endif
