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
 * binary_tree_leaves - returns whether a binary tree is perfect
 *
 * A node is perfect height of left and right are equal
 * A tree is perfect if all of its subtrees are perfect
 *
 * @tree: pointer to the root of tree
 * Return: 1 if tree is perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;
	int left_is_perfect;
	int right_is_perfect;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		/* node must be leaf */
		return (1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		/* tree is not perfect */
		return (0);

	/* check that left and right subtrees are also perfect */
	left_is_perfect = binary_tree_is_perfect(tree->left);

	if (left_is_perfect == 0)
		/* don't bother traversing right */
		return (0);

	right_is_perfect = binary_tree_is_perfect(tree->right);

	return (right_is_perfect);
}
