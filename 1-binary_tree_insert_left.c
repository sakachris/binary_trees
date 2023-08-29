#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the root node
 * @value: data to be stored in the node
 *
 * Return: node inserted
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (!parent)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));
	if (!left_node)
		return (NULL);

	left_node->n = value;
	left_node->parent = parent;
	left_node->left = parent->left;
	left_node->right = NULL;
	if (parent->left)
		parent->left->parent = left_node;
	parent->left = left_node;

	return (left_node);
}
