#include "binary_trees.h"

/**
* binary_tree_node - Creates a binary tree node
* @parent:	A pointer to the parent of the node to create
* @value:	The value to put in the new node
*
* Return:	If an error occurs - NULL,
*			Otherwise - a pointer to the new node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	root = malloc(sizeof(binary_tree_t));
	if (root == NULL)
		return (NULL);

	root->n = value;
	root->parent = parent;
	root->left = NULL;
	root->right = NULL;

	return (root);
}
