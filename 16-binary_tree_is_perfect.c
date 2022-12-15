#include "binary_trees.h"

/**
* binary_tree_is_perfect - Checks if Binary Tree is Perfect
* @tree: A pointer to the root node of the tree to check
* Return: Returns (1) If Tree if PERFECT Otherwise (0)
* Description: Tree is NULL, your function must be (0)
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, max_nodes, size, i = 1, pow = 2;

	if (!tree)
		return (0);

	height = (int)binary_tree_height(tree);
	for ( ; i < height + 1; i++)
		pow *= 2;
	max_nodes = pow - 1;
	size = binary_tree_size(tree);
	if (size == max_nodes || height == 0)
		return (1);
	else
		return (0);
}

/**
* binary_tree_height - Measures the Height of a tree
* @tree: A pointer to the root node of the tree to measure
* Return: Returns Height integer of the tree
* Description: Tree is NULL, your function must be (0)
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t length_left = 0;
	size_t length_right = 0;

	if (tree == NULL)
		return (0);

	length_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	length_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (length_left > length_right ? length_left : length_right);
}
