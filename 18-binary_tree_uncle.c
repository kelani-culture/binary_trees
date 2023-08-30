#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle node
 * @node: pointer to node
 * Return: uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grand_parent;

	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);

	parent =  node->parent;
	grand_parent = parent->parent;

	if (parent == grand_parent->left)
		return (grand_parent->right);

	else
		return (grand_parent->left);
}
