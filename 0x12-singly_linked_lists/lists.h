#ifndef LISTS
#define LISTS
#include <stddef.h>
/**
 * struct list_t - linked lists
 * @str: value of data
 * @len: length of the value
 * @next: pointer to the next node
 */

typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;


size_t print_list(const list_t *h);
#endif
