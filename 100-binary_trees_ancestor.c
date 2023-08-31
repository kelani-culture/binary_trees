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
	/*ancestors_of_second[100];*/
	int i, depth;

	if (first == NULL || second == NULL)
		return NULL; // If either node is NULL, return NULL

	/* Initialize ancestor sets */
	for (i = 0; i < 100; i++)
	{
		ancestors_of_first[i] = NULL;
        /*ancestors_of_second[i] = NULL;*/
	}

    /* Traverse from the first node to the root and store ancestors in the set*/
	depth = 0;
	current = (binary_tree_t *)first;
	while (current != NULL)
	{
		ancestors_of_first[depth++] = current;
		current = current->parent;
	}

    /*Traverse from the second node to the root and compare with ancestors*/
	current = (binary_tree_t *)second;
    while (current != NULL)
	{
		for (i = 0; i < depth; i++)
		{
			if (current == ancestors_of_first[i])
                return (current); /*Found common ancestor*/
		}
		current = current->parent;
	}

	return (NULL); /*No common ancestor found*/
}
