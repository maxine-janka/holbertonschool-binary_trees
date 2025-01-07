#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal.
 *
 * @tree: A pointer to the root node.
 * @func: A pointer to a function to call for each node.
 *
 * Return: nothing.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/*traverse left first*/
	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);

	/*Execute func on current node*/
	func(tree->n);

	/*traverse on right*/
	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);
}
