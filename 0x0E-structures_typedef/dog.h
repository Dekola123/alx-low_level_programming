#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;

/**
 * struct dog - struct that stores some info on dog
 * @name; info on name
 * @age: info on age
 * @owner: info on owner
 *
 * Description: struct called "dog" that stores its name,
 * its age and owner's name
 */

struct dog 
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
