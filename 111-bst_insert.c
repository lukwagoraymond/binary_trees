#include "binary_trees.h"
#include "0-binary_tree_node.c"

/**
* bst_insert - Inserts a value in a Binary Search Tree
* @tree: Pointer to root node of BST to insert the value
* @value: Value to store in the node to be inserted
* Return: A pointer to the created node, or NULL on failure
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current, *new;

	if (tree)
	{
		current = *tree;

		if (current == NULL)
		{
			new = binary_tree_node(current, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}

		if (value < current->n) /* insert in left subtree */
		{
			if (current->left)
				return (bst_insert(&current->left, value));

			new = binary_tree_node(current, value);
			if (new == NULL)
				return (NULL);
			return (current->left = new);
		}

		if (value > current->n) /* insert in right subtree */
		{
			if (current->right)
				return (bst_insert(&current->right, value));

			new = binary_tree_node(current, value);
			if (new == NULL)
				return (NULL);
			return (current->right = new);
		}
	}
	return (NULL);
}
