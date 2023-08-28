#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node to the left
 *	part of the tree
 * @parent: pointer to the root node
 * @value: value to insert to the node
 * Return: tree
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	/*Existing left child of parent becomes left child of new_node*/
	new_node->left = parent->left;
	new_node->right = NULL;

	/*Update parent of the existing left child*/
	if (parent->left != NULL)
		parent->left->parent = new_node;

	/* Set the new_node as the left child of the parent */
	parent->left = new_node;
	return (new_node);
}
