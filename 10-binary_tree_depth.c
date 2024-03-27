#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in a binary tree
* @tree: pointer to the node to measure the depth
* Return: depth of the tree or 0 if the tree is NULL
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t level;

if (tree == NULL)
return (0);

/* Check if the node has a parent and calculate the depth accordingly */
if (tree->parent != NULL)
{
level = 1 + binary_tree_depth(tree->parent);
}
else
{
level = 0;
}
return (level);
}
