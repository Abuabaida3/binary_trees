#include "binary_trees.h"
/**
 * size_t binary_tree_leaves function that retun the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sumleaves = 0, leftleaves = 0, rightleaves = 0;
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		leftleaves = 1 + binary_tree_leaves(tree->left);
		rightleaves = 1 + binary_tree_leaves(tree->right);
		sumleaves = leftleaves + rightleaves;
		return (sumleaves);
	}
}
