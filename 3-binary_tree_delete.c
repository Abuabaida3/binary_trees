#include "binary_trees.h"
/**
 * binary_tree_delete - tree an entire free using recursion it free node 
 * when the node lift and wright are NULL
 * @tree: tree to free
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else 
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
		}
}
