#include "binary_trees.h"

/**
* binary_tree_is_bst - Checks if a binary tree is a valid
*						Binary Search Tree
* @tree: Pointer to the root node of the tree to check
* Return: (1) if tree is BST Otherwise return (0)
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_bst_helper(tree, INT_MIN, INT_MAX));

}

/**
* is_bst_helper - Checks if a binary tree is a valid binary search tree
* @tree: A pointer to the root node of the tree to check
* @lo: The value of the smallest node visited thus far
* @hi: The value of the largest node visited thus far
*
* Return: If the tree is a valid BST, (1) otherwise (0)
*/
int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
	if (!tree)
		return (1);

	if (tree->n < lo || tree->n > hi)
		return (0);

	return (is_bst_helper(tree->left, lo, tree->n - 1) &&
				is_bst_helper(tree->right, tree->n + 1, hi));
	/* -1 and +1 stem from "There must be no duplicate values" req */
}
