#include "binary_trees.h"

/**
 * binary_tree_preorder - go traversal
 *
 * @tree: pointer to root to traverse
 * @func: pointer to a function for each node.
 * The value in the node must PASSED this function.
 * If tree or func is NULL, do nothing
 * the function point to root then left left till no left then right till ends
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree == NULL) || (func == NULL))
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
