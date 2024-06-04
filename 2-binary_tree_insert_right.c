#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts right node
 *
 * @parent: pointer to the node we will insert right in it
 * @value: value
 * Return: pointer to new rightnode
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode;

	if (parent == NULL)
		return (NULL);

	rightnode = binary_tree_node(parent, value);
	if (rightnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		rightnode->right = parent->right;
		parent->right->parent = rightnode;
	}
	parent->right = rightnode;
	return (rightnode);
}
