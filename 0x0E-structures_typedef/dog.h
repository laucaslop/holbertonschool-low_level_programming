#ifndef _DOG_H_
#define _DOG_H_

/*
* typedef struct - main
*/

typedef struct dog dog_t;
 
/**
* struct dog -main entry.
* @name: pointer to a char
* @age: float
* @owner: pointer to a char
* Description: types struct dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
