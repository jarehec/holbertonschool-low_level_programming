#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: binary tree
 *
 * Return: 1 if full, else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 0;

	if (tree && tree->left && tree->right)
	{
		is_full = 1;
		is_full = binary_tree_is_full(tree->left);
		is_full = binary_tree_is_full(tree->right);
	}
	if (!tree->left && !tree->right)
		is_full = 1;
	return (is_full);
}
