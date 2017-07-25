#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node to check
 *
 * Return: 1 if node is leaf, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node->left || node->right ? 0 : 1);
}
