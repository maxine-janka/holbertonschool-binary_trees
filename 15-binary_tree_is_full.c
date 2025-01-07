#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: A pointer to the root node.
 *
 * Return: 1 is full, 0 otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/*basecase, empty tree*/
	if (tree == NULL)
		return (0);

	/*Check if current node is a leaf*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*Recursion to check if subtrees are full*/
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
