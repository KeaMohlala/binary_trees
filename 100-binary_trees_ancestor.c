#include "binary_trees.h"

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes
* @first: pointer to first node
* @second: pointer to the second node
* Return: pointer to the lowest commmon ancestor of the two given nodes
* or NULL if an ancestor is not found
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
const binary_tree_t *currentNode;
binary_tree_t *ancestor1, *ancestor2;

if (!first || !second)
return (NULL);

currentNode = second;

while (currentNode != NULL)
{
if (currentNode == first)
return ((binary_tree_t *)first);
currentNode = currentNode->parent;
}

currentNode = first;
while (currentNode != NULL)
{
if (currentNode == second)
return ((binary_tree_t *)second);
currentNode = currentNode->parent;
}

ancestor1 = first->parent;
ancestor2 = second->parent;

while (ancestor1 != NULL)
{
while (ancestor2 != NULL)
{
if (ancestor1 == ancestor2)
return (ancestor1);
ancestor2 = ancestor2->parent;
}
ancestor1 = ancestor1->parent;
ancestor2 = second->parent;
}
return (NULL);
}
