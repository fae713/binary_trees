#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *
 * @node: the node to check
 *
 * Return: 1 (Success)) 0 (Failure)
 */
int binary_tree_is_leaf(binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1)

	else
		return (0);

}
