#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: binary tree
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree)
	{
		if (tree->left)
		{
			left += binary_tree_balance(tree->left);
			left++;
		}
		if (tree->right)
		{
			right += binary_tree_balance(tree->right);
			right++;
		}
	}
	return (left - right);
}
