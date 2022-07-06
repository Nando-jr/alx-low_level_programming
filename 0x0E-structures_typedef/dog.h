#ifndef DOG_TAG
#define DOG_TAG

typedef struct dog dog_tag;

/* struct dog - stores name, age & owner of dog */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_tag *new_dog(char *name, float age, char *owner);
void free_dog(dog_tag *d);

#endif
