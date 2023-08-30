#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if full, 0 if not or if tree is null
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_f, right_f;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);
	else if (tree->left && tree->right)
	{
		left_f = binary_tree_is_full(tree->left);
		right_f = binary_tree_is_full(tree->right);
		return (left_f && right_f);
	}

	return (0);
}
