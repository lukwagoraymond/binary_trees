#include "binary_trees.h"

/**
* binary_tree_nodes - Counts nodes with atleast one child in a binary Tree
* @tree: A pointer to the root node of tree to count the number of nodes
* Return: Returns Number of nodes with atleast one node
* Description: Tree is NULL, your function must be (0)
*				A NULL pointer is not a node
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child_node = 0;

	if (!tree)
		return (0);

	if (tree)
	{
		child_node += (tree->left || tree->right) ? 1 : 0;
		child_node += binary_tree_nodes(tree->right);
		child_node += binary_tree_nodes(tree->left);
	}

	return (child_node);
}
