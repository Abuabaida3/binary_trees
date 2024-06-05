#include "binary_trees.h"
/**
 * size_t binary_tree_size - function that return the size of a tree
 * @tree: tree to check
 * Return: size of tree
 */
 size_t binary_tree_size(const_tree_t *tree);
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		binary_tree_size(tree->lift);
		binary_tree_size_size(tree->right);
	}
	return (size);
}
