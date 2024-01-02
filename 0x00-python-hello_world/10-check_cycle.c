#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to the head of the linked list
 * Return: 1 if there is a cycle, 0 if there is no cycle
 */

int check_cycle(listint_t *list)
{if (!list || !list->next)
	return (0);
	
	listint_t *slow = list;
	listint_t *fast = list->next;
	
	while (slow != fast)
	{if (!fast || !fast->next)
		return (0);

		slow = slow->next;
		fast = fast->next->next;
	}
	return (1);
}

