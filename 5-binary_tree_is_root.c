#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a leaf
 *
 * @node: the node to check
 *
 * Return: 1 (Success) 0 (Failure)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left != NULL)
		return (1);
	else
		return (0);
}