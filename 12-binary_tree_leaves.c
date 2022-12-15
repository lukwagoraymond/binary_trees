#include "binary_trees.h"

/**
* binary_tree_leaves - Counts the number of leaves in a binary Tree
* @tree: A pointer to the root node of tree to count the number of leaves
* Return: Returns Size of the Tree
* Description: Tree is NULL, your function must be (0)
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0;

	if (tree == NULL)
		return (0);

	if (tree)
	{
		leaf_count += !tree->left && !tree->right ? 1 : 0;
		leaf_count += binary_tree_leaves(tree->left);
		leaf_count += binary_tree_leaves(tree->right);
	}

	return (leaf_count);
}
