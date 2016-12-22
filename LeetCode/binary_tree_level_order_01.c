void traverse(struct TreeNode *root, int depth, int ***arr, int **columnSizes, int *returnSize)
{
        if (!root)
                return;

        if (*returnSize < depth + 1) {
                *returnSize = depth + 1;

                // Should initialize the one more allocated space to NULL (or 0)
                // void *realloc(void *ptr, size_t size);
                If the new size is larger than the old size, the added memory will not be initialized.
                // allocate *arr
                *arr = realloc(*arr, (depth + 1) * sizeof(int *));
                (*arr)[depth] = NULL;

                *columnSizes = realloc(*columnSizes, (depth + 1) * sizeof(int));
                (*columnSizes)[depth] = 0;
        }

        (*arr)[depth] = realloc((*arr)[depth], ((*columnSizes)[depth] + 1) * sizeof(int));
        (*arr)[depth][(*columnSizes)[depth]] = root->val;
        ++(*columnSizes)[depth];

        traverse(root->left, depth + 1, arr, columnSizes, returnSize);
        traverse(root->right, depth + 1, arr, columnSizes, returnSize);
}

int **levelOrder(struct TreeNode *root, int **columnSizes, int *returnSize)
{
        //
        int **arr;

        arr = NULL;
        *returnSize = 0;

        traverse(root, 0, &arr, columnSizes, returnSize);

        return arr;
}
