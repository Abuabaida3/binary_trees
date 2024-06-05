#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if it is root (parent node).
 * @node: A pointer to node
 *
 * Return: If the node is a parent 1.
 *         not parent then 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);

	return (0);
}
