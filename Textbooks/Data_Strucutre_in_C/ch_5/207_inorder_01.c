/* inorder traversal */

// gcc 207_inorder_01.c tree.c 

#include <stdio.h>
#include "tree.h"

void node_inorder(node_t *root)
{

        if (root){
                node_inorder(root -> left);
                printf("%d ", root -> value);
                node_inorder(root -> right);
        }
}

int main()
{
        tree_t *t = tree_create();
        tree_init(t);

        tree_insert_node(t, 1);
        tree_insert_node(t, 5);
        tree_insert_node(t, 6);
        tree_insert_node(t, 22);
        tree_insert_node(t, 99);
        tree_insert_node(t, 10);
        tree_insert_node(t, 3);
        tree_insert_node(t, 1);
        tree_insert_node(t, 1);

        node_inorder(t -> root);


}
