#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: binary tree
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree)
	{
		if (tree->left)
		{
			balance++;
			balance += binary_tree_balance(tree->left);
		}
		if (tree->right)
		{
			balance--;
			balance -= binary_tree_balance(tree->right);
		}
	}
	return (balance);
}
