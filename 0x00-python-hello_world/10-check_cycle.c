#include <stdio.h>
#include "lists.h"
/**
 * check_cycle - bdjdjdjrhrhrjrj
 * @list: ejjeejei
 * Return: dieiei
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);
	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = list;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (1);
		}
	}
	return (0);
}
