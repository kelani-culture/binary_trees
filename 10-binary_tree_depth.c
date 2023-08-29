#include "binary_trees.h"

/**
 *binary_tree_depth - calculate the depth of  a tree
 *@tree: pointer to the tree
 *Return: depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
