#include "lists.h"

/**
 * len - Calculates the length of a string.
 * @s: Constant string
 * Return: The length of the string
 */
int len(const char *s)
{
	unsigned int i = 0;

	if (!s)
		return (0);

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
* add_node - Creates a node and adds it to a linked list
* @head: Pointer to head of the linked list
* @str: String to assigned to the node
* Return: Pointer to the head of the linked list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nodo;

	if (!head)
		return (NULL);

	new_nodo = (list_t *)malloc(sizeof(list_t));
	if (!new_nodo)
		return (NULL);

	if (*head == NULL)
		new_nodo->next = NULL;
	else
		new_nodo->next = *head;

	(*new_nodo).str = strdup(str);
	(*new_nodo).len = len(str);
	*head = new_nodo;
	return (*head);
}
