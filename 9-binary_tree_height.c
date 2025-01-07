#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of the binary tree.
 *
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height, otherwise 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/*empty tree and base case when leaf node reached*/
	if (tree == NULL)
		return (0);

	/*Check for children*/
	else if (tree->left || tree->right)
	{
		/*Get height for subtrees*/
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		/*Comapare heights, +1 to account for all edges in tallest child*/
		if (left_height > right_height)
			return (left_height + 1);
		return (right_height + 1);
	}
	else
		return (0);
}
