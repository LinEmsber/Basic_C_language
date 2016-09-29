int sumOfLeftLeaves(struct TreeNode* root) {

	if (root == NULL){
		return 0;
	}

	int sum = 0;

	// check left side first
	if (root -> left != NULL){

		// check the exist of the deeper left leaves
		if( root -> left -> left == NULL && root -> left -> right == NULL){
			sum += root -> left -> val;
		}else{
			sum += sumOfLeftLeaves(root -> left);
		}
	}


	if (root -> right != NULL){
		sum += sumOfLeftLeaves(root -> right);
	}

	return sum;
}
