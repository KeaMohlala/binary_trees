#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height
* Return: The height of the tree or 0 if the tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height;
size_t right_height;

if (tree == NULL)
return (0);

/* Calculate the height of the left subtree */
if (tree->left != NULL)
{
left_height = 1 + binary_tree_height(tree->left);
}
else
{
left_height = 0;
}

/* Calculate the height of the right subtree */
if (tree->right != NULL)
{
right_height = 1 + binary_tree_height(tree->right);
}
else
{
right_height = 0;
}

/* Return the maximum height of the left and right subtrees */
return (left_height > right_height ? left_height : right_height);
}
