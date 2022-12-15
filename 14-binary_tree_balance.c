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
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

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

	length_left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	length_right = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return ((length_left > length_right) ? length_left : length_right);
}
