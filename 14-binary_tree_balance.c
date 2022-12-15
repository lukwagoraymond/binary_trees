#include "binary_trees.h"

/**
* binary_tree_balance - Measures the Balance Factor of a binary tree
* @tree: A pointer to the root node of tree to measure the balance factor
* Return: Returns Balance Factor
* Description: Tree is NULL, your function must be (0)
*				If (0) then Tree Balance Otherwise not balanced
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right))

	return (0);
}
