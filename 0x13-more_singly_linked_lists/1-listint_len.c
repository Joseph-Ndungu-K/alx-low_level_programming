#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to list
<<<<<<< HEAD
 * 
=======
 *
>>>>>>> 047b6e8e496a91b4c07b2851fe926bb9112ff6d5
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *elements;
	size_t len = 0;

	elements = h;

	while (elements != 0)
	{
		len++;
		elements = elements->next;
	}

	return (len);
}
