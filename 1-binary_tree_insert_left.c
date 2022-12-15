#include "binary_trees.h"

/**
* binary_tree_insert_left -	Inserts a node as left child of another node
*							in a binary tree.
* @parent:	A pointer to hte node to insert the left-child in.
* @value:	The value to put in the new node
*
* Return:	If parent is NULL or an error occurs - NULL.
*			Otherwise - a pointer to the new node.
* Description:	If parent already has a left-child, the new node
*				takes its place and the old left-child is set as
*				the left-child of the new node.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);

	if (newnode == NULL)
		return (NULL);

	if (parent->left == NULL)
		parent->left = newnode;
	else
		newnode->left = parent->left;
		parent->left->parent = newnode;

	return (newnode);
}
