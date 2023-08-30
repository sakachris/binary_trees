#include "binary_trees.h"

/**
 * binary_tree_height - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: 1 if perfect, 0 if not or if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (!tree)
		return (0);

	left_h = binary_tree_height(tree->left) + 1;
	right_h = binary_tree_height(tree->right) + 1;

	return ((left_h > right_h) ? left_h : right_h);
}

/**
 * binary_tree_is_perfect - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor or 0 if tree is null
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0, left_p, right_p;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);
	else if (tree->left && tree->right)
	{
		left_h = binary_tree_height(tree->left);
		right_h = binary_tree_height(tree->right);
		if (left_h == right_h)
		{
			left_p = binary_tree_is_perfect(tree->left);
			right_p = binary_tree_is_perfect(tree->right);
			if (left_p && right_p)
				return (1);
		}
	}

	return (0);
}
