#include "binary_trees.h"
/**
* binary_tree_height_b measues height of binary tree a bal tree
* @tree: tree to go throught
* Return: the height
*/
int binary_tree_balance(const binary_tree_t *tree)
{
size_t 1 = 0;
size_t r = 0;
if (tree == NULL)
{
return (0);
}
else
{
if (tree)
{
1 = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
}
return ((1 > r) ? 1 : r);
}


/**
* binary_tree_balane - measures balance factor of a binary tree
* @tree: tree to go through
* return: balaned factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int right = 0, left = 0;

if (tree)
{
left = ((int)binary_tree_height_b(tree->lift));
right = ((int)binary_tree_heigh-b(tree->right));
total = left - right;
}
return (total);
}
