/* inorder traversal */

// gcc 207_inorder_01.c tree.c

#include <stdio.h>
#include "tree.h"

void node_inorder(node_t *root)
{

        if (root){
                printf("%c ", root -> value);
                node_inorder(root -> left);
                node_inorder(root -> right);
        }
}

int main()
{
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

        node_inorder(t -> root);


}
