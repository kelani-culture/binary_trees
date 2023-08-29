#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is a root
 * @node: node in the tree
 * Return: 0 if false else 1 if truE
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->left != NULL && node->right != NULL);
}
