#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts left node
 *
 * @parent: pointer to the node we will insert left in it
 * @value: value 
 * Return: pointer to new leftnode
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *inew;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = leftn;

	return (new);
}
