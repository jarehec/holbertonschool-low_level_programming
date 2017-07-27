#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: binary tree
 *
 * Return: 1 if perfect, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned int expected;

	if (tree)
	{
		expected = binary_pow(2, binary_tree_height(tree) + 1) - 1;
		printf("%u == %lu\n", expected, binary_tree_size(tree));
		return (expected == binary_tree_size(tree) ? 1 : 0);
	}
	return (0);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: binary tree
 *
 * Return: number of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		if (tree->left)
			count += binary_tree_size(tree->left);
		if (tree->right)
			count += binary_tree_size(tree->right);
		count++;
	}
	return (count);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: binary tree
 *
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree)
	{
		if (tree->left)
		{
			left += binary_tree_height(tree->left);
			left++;
		}
		if (tree->right)
		{
			right += binary_tree_height(tree->right);
			right++;
		}
	}
	return (right < left ? left : right);
}

/**
 * binary_pow - returns x^y
 * @x: base
 * @y: exponent
 * Return: x^y
 */
unsigned int binary_pow(unsigned int x, unsigned int y)
{
	unsigned int result = x;

	if (y == 0 || (int)y < 0)
		return (1);
	for ( ; y > 1; result *= x, y--)
	;
	return (result);
}
