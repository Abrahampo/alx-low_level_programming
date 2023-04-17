#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog basic information
 * @nn: name of dog
 * @age: age of dog
 * @own: owner of dog
 */

struct dog
{
	char *nn;
	float age;
	char *own;
};

void int_dog(struct dog *d, char *n, float age, char *own);
void print_dog(struct dog *d);
typedef struct dog dog_tt;
dog_tt *new_dog(char *n, float age, char own);
void free_dog(dog_tt *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *v);

#endif
