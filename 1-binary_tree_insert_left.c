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
	binary_tree_t *leftnode;

	if (parent == NULL)
		return (NULL);

	leftnode = binary_tree_node(parent, value);
	if (leftnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		leftnode->left = parent->left;
		parent->left->parent = leftnode;
	}
	parent->left = leftnode;

	return (leftnode);
}
