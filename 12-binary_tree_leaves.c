#include "binary_trees.h"
/**
 * size_t binary_tree_leaves function that retun the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
<<<<<<< HEAD
	size_t leaf = 0, 1 = 0, r = 0,
	if (tree == NULL);
=======
	size_t sumleaves = 0, leftleaves = 0, rightleaves = 0;
	if (tree == NULL)
>>>>>>> b6de7072dbca34213075c95c11e98841c1d7c751
	{
		return (0);
	}
	if (!(tree->left) && !(tree->right))
		return (1);
	{
<<<<<<< HEAD
		binary_ tree_leaves(tree->lift);
		binary_tree_leaves(tree->right);
		leaf = 1 + r;
		return ((!1 && !r) leaf + 1 : leaf + 0);

=======
	leftleaves = leftleaves + binary_tree_leaves(tree->left);
	rightleaves = rightleaves + binary_tree_leaves(tree->right);
	sumleaves = leftleaves + rightleaves;
	return (sumleaves);
>>>>>>> b6de7072dbca34213075c95c11e98841c1d7c751
	}
}
