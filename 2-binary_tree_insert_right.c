#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as the right-child of another node
 * @parent: the root node
 * @value: data to be stored in the node
 *
 * Return: node inserted
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (!parent)
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));
	if (!right_node)
		return (NULL);

	right_node->n = value;
	right_node->parent = parent;
	right_node->left = NULL;
	right_node->right = parent->right;
	if (parent->right)
		parent->right->parent = right_node;
	parent->right = right_node;

	return (right_node);
}
