#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a
 *		binary tree is full
 * @tree: pointer to root node
 * Return: 1 if full else 0 if not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* check for leave node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* check if tree is full */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	/* if neither is met */
	return (0);
}
