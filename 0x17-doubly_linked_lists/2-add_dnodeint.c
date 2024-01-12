#include <stdlib.h>

typedef struct dlistint_s
{
  int n;
  struct dlistint_s *prev;
  struct dlistint_s *next;
} dlistint_t;

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *newNode = malloc(sizeof(dlistint_t));

  if (newNode == NULL)
  {
      return NULL;
  }

  newNode->n = n;
  newNode->next = *head;
  newNode->prev = NULL;

  if (*head != NULL)
  {
      (*head)->prev = newNode;
  }

  *head = newNode;

  return newNode;
}

