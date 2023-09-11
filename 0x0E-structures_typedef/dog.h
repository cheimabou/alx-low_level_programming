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
#endif
