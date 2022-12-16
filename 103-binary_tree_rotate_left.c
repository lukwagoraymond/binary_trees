#include "binary_trees.h"

/**
* binary_tree_rotate_left - Performs a left-rotation on a tree
* @tree: Pointer to the root node of the tree
* Return: Returns pointer to new tree rotated
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp;

	if (!tree || !tree->right)
		return (NULL);

	tmp = tree->right;
	tree->right = tmp->left;

	if (tmp->left)
		tmp->left->parent = tree;

	tmp->left = tree;
	tmp->parent = tree->parent;
	tree->parent = tmp;

	return (tmp);
}
