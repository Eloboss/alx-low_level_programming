#ifndef DOG_H
#define DOG_H

/**
 * struct dog- To print details about dog
 * @name: Name of d dog
 * @age: Age of dog
 * @owner: Owner of d dog
 *
 * Return: Always 0
 */

struct dog {
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
