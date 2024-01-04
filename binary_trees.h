#ifndef BINARY_TREE_H
#define BINARY_TREE_H

/**
 * struct binary_tree_S - Binary tree node
 *
 * @n: Interger stored in node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
}binary_tree_t;

void binary_tree_print(const binary_tree_t *);
#endif /*BINARY_TREE_H*/
