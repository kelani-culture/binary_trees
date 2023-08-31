#include "binary_trees.h"

/**
 * binary_tree_ancestor - find the lowest common ancestor of nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *current, *ancestors_of_first[100];
	int i, depth;

	if (first == NULL || second == NULL)
		return (NULL);

	/* Initialize ancestor sets */
	for (i = 0; i < 100; i++)
		ancestors_of_first[i] = NULL;

	depth = 0;
	current = (binary_tree_t *)first;
	while (current != NULL)
	{
		ancestors_of_first[depth++] = current;
		current = current->parent;
	}
	current = (binary_tree_t *)second;
	while (current != NULL)
	{
		for (i = 0; i < depth; i++)
		{
			if (current == ancestors_of_first[i])
				return (current);
		}
		current = current->parent;
	}

	return (NULL);
}
