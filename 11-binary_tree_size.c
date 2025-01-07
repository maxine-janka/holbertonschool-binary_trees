#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree (nodes).
 *
 * @tree: A pointer to the root node of the tree.
 *
 * Return: the size, otherwise 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	/*empty tree and basecase*/
	if (tree == NULL)
		return (0);
	/*get number of nodes on left and right recursively*/
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	
	/*Add the num of nodes +1 for current node*/
	return (left_size + right_size + 1);
}
