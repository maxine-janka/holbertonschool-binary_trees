#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node that does not have a child.
 *
 * @parent: A pointer to the parent node to create.
 * @value: The value to put in the new node.
 *
 * Return: A pointer to the new node, NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*Alloc mem for new node*/
	new_node = malloc(sizeof(binary_tree_t));

	/*If mem alloc fails*/
	if (new_node == NULL)
		return (NULL);

	/*Set new node properties*/
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
