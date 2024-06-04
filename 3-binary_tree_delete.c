#include "binary_tree.h"
/**
 * binary_tree_delete - free an entire free using recursion it free node 
 * when the node lift and wright are NULL
 * @tree: tree to free
 * Return: nothing
 */
void binary_tree_delet(binary_tree_t *tree);
{
	if (tree = NULL)
	{
		return;
	}
	else 
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->life);
			binary_tree_delete(tree->wright);
		}
		return free(tree);
	}
}
