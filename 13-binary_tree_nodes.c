#include "binary_trees.h"

/**
 * binary_tree_node - count nodes with
 *	at least a child
 * @tree: the node tree
 * Return: count of node child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count++;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
