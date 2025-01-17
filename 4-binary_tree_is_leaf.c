#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf (zero children)
 * @node: binary tree node
 * Return: 1 if leaf, else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);

	return (0);
}
