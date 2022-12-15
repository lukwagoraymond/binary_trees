#include "binary_trees.h"

/**
* binary_tree_is_full - Checks if Binary Tree is Full
* @tree: A pointer to the root node of the tree to check
* Return: Returns (1) If Tree if FULL Otherwise (0)
* Description: Tree is NULL, your function must be (0)
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int full_l = 0, full_r = 0, full = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	full_l = binary_tree_is_full(tree->left);
	full_r = binary_tree_is_full(tree->right);

	if ((full_l == 1 && full_r == 0) || (full_l == 0 && full_r == 1))
		full = 0;
	else
		full = 1;

	return (full);
}
