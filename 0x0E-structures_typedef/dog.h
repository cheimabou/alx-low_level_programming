#ifndef new_type
#define new_type
/**
 * struct dog - a dog's basic informations
 * @name: name of the dog
 * @age: its age
 * @owner: its owner's name
 * Description: Long desc
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
