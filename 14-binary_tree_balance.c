#include "binary_trees.h"

/**
 * binary_tree_height - returns height of a node in binary tree
 * @tree: pointer to the node to measure
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	/*
	 * height is 1 +  the maximum of: 
	 * - height of left child
	 * - height or right child
	 */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - difference in height between left and right subtrees
 * @tree: pointer to the node to measure
 * Return: difference in height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	/* get height of left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
