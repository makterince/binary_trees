#include "binary_trees.h"
/**
 *binary_tree_insert_left - inserts a node to the left of its parent
 *@parent: parent node
 *@value: value of node
 *Return: left new node or null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
{
	binary_tree_t *leftNode = malloc(sizeof(binary_tree_t));
	binary_tree_t *head;

	head->parent = parent;
	if (head == NULL)
	{
		return (NULL);
	}

	head->n = value;
	head->left = leftNode;
	head->right = NULL;
	return (leftNode);
}
