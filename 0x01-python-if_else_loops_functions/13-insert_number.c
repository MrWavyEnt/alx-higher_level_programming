#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * insert_node - Inserts a new node into a sorted linked list.
 * @head: Pointer to the head of the linked list.
 * @number: Value to be inserted into the new node.
 * This function inserts a new node with the specified value into a sorted
 * linked list while maintaining the sorted order.
 * Return: Pointer to the newly inserted node, or NULL if memory allocation fails.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node;
	listint_t *current;
	
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = number;
	new_node->next = NULL;
	
	current = *head;
	while (current != NULL && current->n < number)
	{
		current = current->next;
	}
	
	new_node->next = current;
	if (current == *head)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != new_node->next)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	
	return (new_node);
}
