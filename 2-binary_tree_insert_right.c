#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: Pointer to the parent node of the node to insert the right-child in
 * @value: Value to store in new node
 *
 * Return: Pointer to new node or else NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *new_right_node = binary_tree_node(parent, value);

	if (new_right_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new_right_node->right = parent->right;
		parent->right->parent = new_right_node;
	}

	parent->right = new_right_node;
	return (parent->right);
}