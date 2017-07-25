#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child
 * @value: value to store in the new node
 *
 * Return: pointer to new node on success, else NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *temp = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (!parent->right)
		parent->right = new_node;
	else
	{
		temp = parent->right;
		while (value > temp->n && temp->right)
			temp = temp->right;
		if (value > temp->n)
		{
			temp->right = new_node;
			new_node->parent = temp;
		}
		else
		{
			new_node->right = temp;
			temp->parent->right = new_node;
			new_node->parent = temp->parent;
			temp->parent = new_node;
		}
	}
	return (new_node);
}
