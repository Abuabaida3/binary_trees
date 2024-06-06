#include "binary_trees.h"
/**
 * tree_is_perfect - function that says if a tree is perfect or not
 * it has to be the same quantity of levels in left as right, and also
 * each node has to have 2 nodes or none
 * @tree: tree to check
 * Return: 0 if is not a perfect or other number that is the level of height
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (tree->left && tree->right)
	{
		left_h = 1 + tree_is_perfect(tree->left);
		right_h = 1 + tree_is_perfect(tree->right);
		if (right_h == left_h && right_h != 0)
			return (left_h);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - perfect
 * @tree: tree
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int final = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		final = tree_is_perfect(tree);
		if (final != 0)
		{
			return (1);
		}
		return (0);
	}
}
