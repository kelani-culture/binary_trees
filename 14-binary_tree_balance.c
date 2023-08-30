#include "binary_trees.h"

/**
 * binary_tree_height - calc height
 * @tree: pointer to root tree
 * Return: height of tree
 */


size_t binary_tree_height(const binary_tree_t *tree);

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height) ? left_height + 1
			: right_height + 1);
}

/**
 * binary_tree_balance - check if a binary tree  is balance
 * @tree: pointer to head tree
 * return: if balance or not
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_bal, right_bal;

	if (tree ==  NULL)
		return (0);

	left_bal = binary_tree_height(tree->left);
	right_bal = binary_tree_height(tree->right);

	return (int)(left_bal - right_bal);
}
