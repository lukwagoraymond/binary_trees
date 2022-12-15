#include "binary_trees.h"

/**
* binary_tree_height - Measures the Height of a tree
* @tree: A pointer to the root node of the tree to measure
* Return: Returns Height integer of the tree
* Description: Tree is NULL, your function must be (0)
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent == NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
