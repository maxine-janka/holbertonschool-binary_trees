#include "binary_trees.h"

/**
 * binary_tree_uncle - returns 'uncle' of node
 *
 * Uncle node is sibling to the parent node
 *
 * @node: pointer to the node to find 'uncle' of
 * Return: pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (node == NULL)
		return (NULL);

	parent = node->parent;

	if (parent == NULL)
		return (NULL);

	grandparent = parent->parent;

	if (grandparent == NULL)
		return (NULL);

	/*
	 * need to find which side the current node is on,
	 * uncle will be on other side
	 */

	if (grandparent->left == parent)
		/* node is on left, uncle is on right */
		return (grandparent->right);

	return (grandparent->left);
}
