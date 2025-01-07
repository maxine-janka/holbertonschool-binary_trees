#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 *
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: A pointer to the sibling node, otherwise NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/*node is NULL, root has no sibling*/
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/*check if node is left child, sibling is the right of same parent*/
	if (node == node->parent->left)
		return (node->parent->right);

	/*node is right, return left child of same parent */
	return (node->parent->left);
}
