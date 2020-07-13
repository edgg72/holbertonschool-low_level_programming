#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int i, length1, length2;
dog_t *dog;
if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (length1 = 0; name[length1]; length1++)
{
;
}
length++;
dog->name = malloc(length1 * sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < length1; i++)
{
dog->name[i] = name[i];
}
dog->age = age;
for (length2 = 0; owner[length2]; length2++)
{
;
}
length2++;
dog->owner = malloc(length2 *sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; i < length2; i++)
{
dog->owner[i] = owner[i];
}
return (dog);
}
