#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count nodes
 *
 * Return: number of nodes or 0 if tree is null
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (0);

	nodes = binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + 1;

	return (nodes);
}
