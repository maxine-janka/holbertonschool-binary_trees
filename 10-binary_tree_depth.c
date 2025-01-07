#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of node in a tree
 * @tree: pointer to the node to measure
 * Return: depth or NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	/* if no parent, depth is zero */
	if (tree->parent == NULL)
		return (0);

	/* otherwise, depth is depth of parent + 1 */
	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
