/* inorder traversal */

// gcc 211_level_order_01.c tree.c

#include <stdio.h>
#include "tree.h"

// Compute the level(height) of a tree, the number of nodes along the longest path
// from the root node down to the farthest leaf node.
int node_level(node_t* node)
{
	if (node == NULL){
		return 0;
	}else{
		// compute the height of each subtree
		int lheight = node_level(node->left);
		int rheight = node_level(node->right);

		// use the larger one
		if (lheight > rheight){
			return lheight + 1;
		}else{
			return rheight + 1;
		}
	}
}

// ==================breadth first search==================
// Print nodes at a given level.
int print_given_level(node_t* root, int level)
{
	// check node is exist or not
	if (root == NULL){
		return 0;
	}

	// // find the children nodes in recursive way.
	// if (level == 1){
	// 	printf("%d ", root->value);
	// }else if (level > 1){
	// 	print_given_level(root->left, level-1);
	// 	print_given_level(root->right, level-1);
	// }

	// find the children nodes in recursive way.
	if (level > 1){
		print_given_level(root->left, level-1);
		print_given_level(root->right, level-1);
	}else if (level == 1){
		printf("%d ", root->value);
	}
	return 1;
}

/* Function to line by line print level order traversal a tree*/
void print_level_order(node_t* root)
{
	int i;
	int h = node_level(root);

	for (i=1; i<=h; i++){
		print_given_level(root, i);
		printf("\n");
	}
}


int main()
{
        int height = 0;

        tree_t *t = tree_create();
        tree_init(t);

        tree_insert_node(t, 'A');
        tree_insert_node(t, 'B');
        tree_insert_node(t, 'D');
        tree_insert_node(t, '*');
        tree_insert_node(t, '*');
        tree_insert_node(t, '/');
        tree_insert_node(t, '+');
        tree_insert_node(t, 'C');
        tree_insert_node(t, 'E');

	height = node_level(t -> root);

        printf( "node_height(t -> root): %d\n", height );

        print_level_order(t -> root);

}
