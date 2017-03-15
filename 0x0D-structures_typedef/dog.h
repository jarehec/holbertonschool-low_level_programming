#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
* struct dog - dog struct
* @name: dog name
* @age: dog age
* @owner: dog owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
