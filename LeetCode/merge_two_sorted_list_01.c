/*
 * Merge two sorted linked lists and return it as a new list.
 * The new list should be made by splicing together the nodes of the first two lists.
 */

typedef node_t struct node;

struct node
{
	int val;
	struct node * next;
};

node_t* merge_list(node_t* l_1, node_t* l_2) {

	if(l_1 == NULL) return l_2;
	if(l_2 == NULL) return l_1;

	node_t *dummy = (node_t*) malloc (sizeof(node_t));
	dummy->next = NULL;

	node_t *ptr = dummy;

	while (l_1 != NULL && l_2 != NULL)
	{
		if (l_1->val < l_2->val)
		{
			ptr->next = l_1;
			l_1 = l_1->next;
		}
		else
		{
			ptr->next = l_2;
			l_2 = l_2->next;
		}
		ptr = ptr->next;
	}

	if (l_1 == NULL)
	{
		ptr->next = l_2;
	}
	else if (l_2 == NULL)
	{
		ptr->next = l_1;
	}

	ptr = dummy->next;
	free(dummy);
	return ptr;
}
