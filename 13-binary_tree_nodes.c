#include "binary_tree.h"
/**
* size_t binary_tree_nodes - fuction
* that returns of nodes in a tree with children
* @tree: tree to check
* Return: number of nodes with children
*/
size_t binary_nodes(const binary_tree_t *tree);
{

size_t node = 0;

if (tree == NULL)
{
return (0);
}
else
{
node += ((tree->right) ? 1 : 0);
node += binary_tree_nodes(tree->lef
node += binary_tree_nodes(tree->right);
return (node);
}

} 