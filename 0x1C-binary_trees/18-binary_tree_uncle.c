#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: binary tree node
 *
 * Return: node uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent->parent)
	{
		if (node->parent->parent->left != node->parent)
			return (node->parent->parent->left);
		else
			return (node->parent->parent->right);
	}
	return (NULL);
}
