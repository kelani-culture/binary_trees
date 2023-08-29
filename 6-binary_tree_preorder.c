#include "binary_trees.h"

/**
 * binary_tree_preorder - transverse a binary tree in preorder
 * @tree - pointer to tree
 * @func - pointer to function to print the tree
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* print the current node */
	func(tree->n);

	/* traverse the left child node */
	binary_tree_preorder(tree->left, func);

	/*traverse the right child node*/
	binary_tree_preorder(tree->right, func);
}
