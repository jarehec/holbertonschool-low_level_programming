#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
* struct dog - dog struct
* @name: dog name
* @age: dog age
* @owner: dog owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif