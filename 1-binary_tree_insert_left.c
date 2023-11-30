#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node
 * as the left-child of another node.
 * @parent: pointer to the node to insert the left-child in.
 * @value:  the value to store in the new node.
 *
 * Return: a pointer to the created node, or
 * NULL on failure or if parent is NULL.
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
		return (NULL);

	new_left_node = binary_tree_node(parent, value);

	if (new_left_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		new_left_node->left->parent = new_left_node;
	}
	parent->left = new_left_node;

	return (new_left_node);
}
