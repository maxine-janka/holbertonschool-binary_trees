#include "binary_trees.h"

/**
 * binary_tree_leaves - counts number of leaves in tree
 * @tree: pointer to the node to measure
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0;
	size_t right_leaves = 0;

	if (tree == NULL)
		return (0);

	/* if current node is leaf, return 1 */
	if (tree->left == NULL && tree->right  == NULL)
		return (1);

	/*
	 * otherwise, count number of leaves in left and right
	 * and return sum 
	 */
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
