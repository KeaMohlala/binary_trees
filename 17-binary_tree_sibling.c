#include "binary_trees.h"

/**
* binary_tree_sibling - finds the sibling of a node
* @node: pointer to the node to find the sibling
* Return: pointer to the sibling node or NULL if not found
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
return (NULL);

if (node->parent->left == NULL || node->parent->right == NULL)
return (NULL);

return ((node->parent->left == node) ? node->parent->right :
node->parent->left);
}
