#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a tree and execute function in post-order
 * @tree: pointer to root of tree to traverse
 * @func: pointer to function to execute on each node
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* traverse left first */
	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);

	/* then right */
	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);

	/* then print current node */
	func(tree->n);

}
