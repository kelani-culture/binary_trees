#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check of a binary tree is a leaf
 * @node: check if its a node
 * Return: 1 if is a leaf 0 if not leaf
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->left == NULL && node->right == NULL);
}
