#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with atleast 1 child in a binary tree.
 *
 * @tree: A pointer to the root node.
 *
 * Return: The number of nodes, otherwise 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	/*empty tree, basecase*/
	if (tree == NULL)
		return (0);

	/*Get number of nodes on left and right*/
	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	/*Has atleast 1 child*/
	if (tree->left || tree->right)
	{
		/*Non-leaf nodes + current node*/
		return (left_nodes + right_nodes + 1);
	}
	else
		/*Don't count nodes that are leaves*/
		return (left_nodes + right_nodes);
}
