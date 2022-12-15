#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an Entire Binary Tree
 * @tree:	A pointer to the root node of the tree to delete
 * Description:	If tree is NILL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);

}
