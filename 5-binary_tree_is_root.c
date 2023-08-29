#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root
 * @node: pointer to the node to check
 *
 * Return: 1 if root or 0 if not root or if node is null
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !(node->parent))
		return (1);
	else
		return (0);
}
