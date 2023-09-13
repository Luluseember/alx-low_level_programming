#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's basic information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of dog owner
 *
 * Description: description of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t my_dog - typedef for struct dog
 */
typedef struct dog_t my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
