/* inorder traversal */

// gcc 211_level_order_01.c tree.c

#include <stdio.h>
#include "tree.h"


struct queue{
	node_t *element;
	struct queue *next;
};
typedef struct queue queue_t;

// Compute the level(height) of a tree, the number of nodes along the longest path
// from the root node down to the farthest leaf node.
int node_level(node_t* node)
{
	if (node == NULL){
		return 0;
	}else{
		// compute the height of each subtree
		int l_height = node_level(node->left);
		int r_height = node_level(node->right);

		// use the larger one
		if (l_height > r_height){
			return l_height + 1;
		}else{
			return r_height + 1;
		}
	}
}

// Print nodes at a given level.
int print_node_given_level(node_t* root, int level)
{
	// check node is exist or not
	if (root == NULL){
		return 0;
	}

	// find the children nodes in recursive way.
	if (level == 1){
		printf("%d ", root->value);
	}else if (level > 1){
		print_node_given_level(root->left, level-1);
		print_node_given_level(root->right, level-1);
	}

	return 1;
}


void enqueue(queue_t **queue, node_t *node)
{
	queue_t *q  = NULL;
	queue_t *head  = *queue;

	if(!(*queue)){
		q =(queue_t *)malloc(sizeof(queue_t));
		q->element = node;
		q->next = NULL;
		*queue = q;
	}
	else{
		q = *queue;
		while(q->next)
			q = q->next;

		queue_t *currentNode =(queue_t *)malloc(sizeof(queue_t));
		q->next = currentNode;
		currentNode->element = node;
		currentNode->next = NULL;
		*queue = head;
	}
}

int is_empty( queue_t *q)
{
	if(!q) return 1;

	return 0;
}

node_t *front(queue_t *queue)
{
	if(queue)
		return queue->element;
}

void dequeue(queue_t **queue)
{
	queue_t *q = *queue;

	queue_t *nodeToDelete = q;
	q = nodeToDelete->next;
	nodeToDelete = NULL;
	free(nodeToDelete);

	*queue = q;
}

void print_node_order_level_itervate(node_t * node)
{

	queue_t *q =  NULL;
	enqueue(&q, node);

	while(!is_empty(q)){
		node_t *currentNode = front(q);

		printf("%d ", currentNode->value);

		if(currentNode->left)
			enqueue(&q, currentNode->left);
		if(currentNode->right)
			enqueue(&q, currentNode->right);

		dequeue(&q);
	}
}

int main()
{
	int height = 0;

	tree_t *t = tree_create();
	tree_init(t);

	tree_insert_node(t, 30);
	tree_insert_node(t, 25);
	tree_insert_node(t, 15);
	tree_insert_node(t, 20);
	tree_insert_node(t, 45);
	tree_insert_node(t, 50);
	tree_insert_node(t, 60);
	tree_insert_node(t, 55);
	tree_insert_node(t, 10);

	print_node_order_level_itervate(t -> root);
	printf("\n");

}
