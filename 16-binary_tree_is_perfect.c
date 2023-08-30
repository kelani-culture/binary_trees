#include "binary_trees.h"


/**
 * binary_tree_is_full1 - a function that checks if a
 *		binary tree is full
 * @tree: pointer to root node
 * Return: 1 if full else 0 if not full
 */

int binary_tree_is_full1(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* check for leave node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* check if tree is full */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full1(tree->left) &&
				binary_tree_is_full1(tree->right));

	/* if neither is met */
	return (0);
}


/**
 * binary_tree_height - height of the binary_tree
 * @tree: pointer to tree
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t right_height;
	size_t left_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height) ?
			left_height + 1 : right_height + 1);
}


/**
 * binary_tree_is_perfect - if a binary tree is perfect
 * @tree: pointer to head tree
 * Return: 1 if perfect else 0 if not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height && binary_tree_is_full1(tree))
		return (1);

	return (0);
}
