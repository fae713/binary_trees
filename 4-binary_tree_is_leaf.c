#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Deletes an entire binary tree
 *
 * @tree: the tree to be deleted in it's entirety
 *
 * Return: 0
 */
int binary_tree_is_leaf(binary_tree_t *node)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_is_leaf(tree->left);
	binary_tree_is_leaf(tree->right);
	free(tree);
}
