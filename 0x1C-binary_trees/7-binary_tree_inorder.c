#include "binary_trees.h"

/**
 * binary_tree_inorder - prints the data in a binary tree inorder
 * @tree: pointer to the root node of a binary tree
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
