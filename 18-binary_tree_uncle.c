#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node or null if no sibling, parent or node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);

	if (node->parent->right && (node->parent->left == node))
		return (node->parent->right);

	if (node->parent->left && (node->parent->right == node))
		return (node->parent->left);

	return (NULL);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node or null if no sibling, or node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent)
		return (binary_tree_sibling(node->parent));

	return (NULL);
}
