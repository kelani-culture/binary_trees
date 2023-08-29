#include "binary_trees.h"

/**
 * binary_tree_leaves - calculate the
 *	leave of a binary tree
 * @tree: pointe to root node
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	if (tree->right != NULL && tree->left != NULL)
		size += 2;

	else if (tree->right != NULL || tree->left != NULL)
		size += 1;

	return (size);
}

