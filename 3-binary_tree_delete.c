#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree.
 *
 * @tree: A pointer to the root node of the tree to delete.
 *
 * Return: nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/*base case*/
	if (tree == NULL)
		return;

	/*recursively delete both subtrees*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	
	/*delete root node at the end*/
	free(tree);
}
