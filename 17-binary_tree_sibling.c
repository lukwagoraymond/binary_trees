#include "binary_trees.h"

/**
* binary_tree_sibling - Finds sibling of node
* @node: A pointer to node to find the sibling
* Return: Returns pointer to the sibling node
* Description: Tree or Parent is NULL, return NULL
*				If node has no siblings return NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (!node || !node->parent)
		return (NULL);
	else if (!node->parent->left || !node->parent->right)
		return (NULL);
	else if (node->parent->left == node)
		sibling = node->parent->right;
	else
		sibling = node->parent->left;
	return (sibling);
}
