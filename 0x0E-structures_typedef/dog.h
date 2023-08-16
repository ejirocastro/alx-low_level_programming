#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structue declaration
 * @name: dogs name type char
 * @age: dogs age type float
 * @owner: dog owner type char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
