#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node to the
 *	right side of the tree
 *
 * @value: value to be inserted
 * @parent: parent node
 * Return: tree
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NodetoTheright = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (NodetoTheright == NULL)
		return (NULL);

	NodetoTheright->n = value;
	NodetoTheright->parent = parent;
	NodetoTheright->right = parent->right;
	NodetoTheright->left = NULL;

	if (parent->right != NULL)
		parent->right->parent = NodetoTheright;

	parent->right = NodetoTheright;
	return (NodetoTheright);
}
