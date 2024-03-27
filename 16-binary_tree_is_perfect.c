#include "binary_trees.h"

/**
* count_node - counts the number of nodes in the binary tree
* @tree: pointer to root node of the binary tree
* Return: number of nodes in the binary tree
*/

size_t count_node(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (1 + count_node(tree->left) +
count_node(tree->right));
}

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

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: pointer to the root node of the tree to check
* Return: 1 if the tree is perfect and 0 if not
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return ((int)count_node(tree) ==
(1 << (binary_tree_height(tree) + 1)) - 1);
}
