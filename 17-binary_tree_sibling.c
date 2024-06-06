#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the node sister
 *
 * @node: pointer to the node to find her sister
 * Return: pointer to sister
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

if (!node || !node->parent)
		return (NULL);

	parent = node->parent;
	if (node == parent->right)
		return (parent->left);

	return (parent->right);
}
