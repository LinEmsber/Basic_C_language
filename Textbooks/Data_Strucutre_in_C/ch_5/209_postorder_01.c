/* inorder traversal */

// gcc 209_postorder_01.c tree.c

#include <stdio.h>
#include "tree.h"

void node_postorder(node_t *root)
{

        if (root){
                node_inorder(root -> left);
                node_inorder(root -> right);
                printf("%c ", root -> value);
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
