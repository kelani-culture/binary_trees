#include "binary_trees.h"
#include <stdlib.h>



void enqueue(queue_t *queue, const binary_tree_t *node);
const binary_tree_t *dequeue(queue_t *queue);
int is_queue_empty(queue_t *queue);

/**
 * binary_tree_levelorder - print the binary tree in level
 *order
 * @tree: pointer to tree node
 * @func: pointer to function print
 */
void binary_tree_levelorder(const binary_tree_t *tree,
		void (*func)(int))
{
	queue_t *queue;

	if (tree == NULL || func == NULL)
		return;
	queue = (queue_t *)malloc(sizeof(queue_t));

	if (queue == NULL)
		return;

	queue->front = NULL;
	queue->rear = NULL;

	enqueue(queue, tree);

	while (!is_queue_empty(queue))
	{
		const binary_tree_t *current = dequeue(queue);

		func(current->n);

		if (current->left != NULL)
			enqueue(queue, current->left);

		if (current->right != NULL)
			enqueue(queue, current->right);
	}

	free(queue);
}

/**
 * enqueue - enqueue a binary tree node
 * @queue: node queue
 * @node: node of tree
 * Return: node
 */

void enqueue(queue_t *queue, const binary_tree_t *node)
{
	queue_node_t *new_node = (queue_node_t *)malloc(sizeof(queue_node_t));

	if (new_node == NULL)
	{
		return;
	}
	new_node->node = node;
	new_node->next = NULL;

	if (queue->rear == NULL)
	{
		queue->front = new_node;
		queue->rear = new_node;
	}
	else
	{
		queue->rear->next = new_node;
		queue->rear = new_node;
	}
}


/**
 * dequeue - a function thaat dequeue a node
 * @queue: queue to dequeue
 * Return: node
 */

const binary_tree_t *dequeue(queue_t *queue)
{
	const binary_tree_t *node;
	queue_node_t *temp;

	if (queue->front == NULL)
		return (NULL);

	node = queue->front->node;
	temp = queue->front;
	queue->front = queue->front->next;
	if (queue->front == NULL)
		queue->rear = NULL;

	free(temp);
	return (node);
}

/**
 * is_queue_empty - check if a queue is empty
 * @queue: pointer to queue
 * Return: true if queue is not
 * empty else false
 */

int is_queue_empty(queue_t *queue)
{
	return (queue->front == NULL);
}
