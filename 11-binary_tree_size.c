#include "binary_trees.h"
/**
 * size_t binary_tree_size - function that return the size of a tree
 * @tree: tree to check
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 1;

	if (tree == NULL)
		return (0);

	tree_size = tree_size + binary_tree_size(tree->left);
	tree_size = tree_size + binary_tree_size(tree->right);

	return (tree_size);
}
