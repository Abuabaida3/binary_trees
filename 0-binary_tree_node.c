#include "binary_tree.h"
/**
 * binary_tree_node - create a binary node
 * @parent: node parent
 * Return: the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	new_node = maloc(sizeof(binary_tree_t));
	if (new_node == null)

	{

		return (NULL)
		
