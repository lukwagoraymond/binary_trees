#include "binary_trees.h"

/**
* binary_tree_size - Measures the Size of a binary Tree
* @tree: A pointer to the root node of the tree to measure the size
* Return: Returns Size of the Tree
* Description: Tree is NULL, your function must be (0)
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		count++;
		count += binary_tree_size(tree->left);
		count += binary_tree_size(tree->right);
	}

	return (count);
}
