#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes in tree left to right to root.
 * @tree: A pointer to the root.
 * @func: A pointer to a function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree != NULL) && (func != NULL))
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
