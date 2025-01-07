#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a tree and execute function in pre-order
 * @tree: pointer to root of tree to traverse
 * @func: pointer to function to execute on each node
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* execute function on current node */
	func(tree->n);

	/* traverse left first */
	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);

	/* then right */
	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);

}
