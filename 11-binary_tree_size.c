#include "binary_trees.h"

/***
 * binary_tree_size - calculate size of the tree
 * @tree: pointer to head tree node
 * Return: size of tree
 */

size_t count_node(binary_tree_t *tree, size_t size);

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	right =binary_tree_size(tree->left);
	left = binary_tree_size(tree->right);

	return ((left)+ 1 + (right));
}

