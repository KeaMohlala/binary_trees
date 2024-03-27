#include "binary_trees.h"

/**
* binary_tree_levelorder - goes through a binary tree
* using level-order traversal
* @tree: pointer to the toot node of the tree
* @func: function pointer to call each node
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
binary_tree_t **nodeQueue;
binary_tree_t *currentNode;
int start, end;

if (!tree || !func == NULL)
return;

nodeQueue = malloc(sizeof(binary_tree_t *));
start = 0;
end = 1;

nodeQueue[0] = (binary_tree_t *)tree;

for (; start < end; start++)
{
currentNode = nodeQueue[start];

func(currentNode->n);

if (currentNode->left != NULL)
{
nodeQueue = realloc(nodeQueue, sizeof(binary_tree_t *) * (end + 1));
nodeQueue[end++] = currentNode->left;
}

if (currentNode->right != NULL)
{
nodeQueue = realloc(nodeQueue, sizeof(binary_tree_t *) * (end + 1));
nodeQueue[end++] = currentNode->right;
}
}
free(nodeQueue);
}
