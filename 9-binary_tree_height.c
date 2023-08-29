#include "binary_trees.h"

/**
 * binary_tree_height - calculate the height of the tree
 * @tree: pointer to the tree
 * return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;
	const binary_tree_t *temp = tree;

	if (tree == NULL)
		return (0);

	while (temp->left != NULL)
	{
		temp = temp->left;
		height_l++;
	}

	temp = tree;
	while (temp->right != NULL)
	{
		temp = temp->right;
		height_r++;
	}

	if (height_l > height_r)
		return (height_l);

	return (height_r);

}
