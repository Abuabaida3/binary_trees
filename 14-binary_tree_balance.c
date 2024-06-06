#include "binary_trees.h"

/**
 * binary_tree_height_b - heaght aand balance
 * @tree: tree to go through
 * Return: the height of the node
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			right = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((left > right) ? left : right);
	}
}

/**
 * binary_tree_balance - Measures balance 
 * @tree: tree
 * Return: balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, sum = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		sum = left - right;
	}
	return (sum);
}
