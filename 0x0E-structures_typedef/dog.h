#ifndef DOG
#define DOG
/**
 * struct dog - dog info
 * @name: name of the dog
 * @owner: name of the owner
 * @age: age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * struct dog_t - dog info
 * @name: name of the dog
 * @owner: name of the owner of the dog
 * @age: age of the dog
 */
typedef struct dog_t
{
	char *name;
	char *owner;
	float age;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
#endif
