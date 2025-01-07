#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the newly created node, NULL on failure
 *         and if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*Check if parent is NULL*/
	if (parent == NULL)
		return (NULL);

	/*create new node, properties set within*/
	new_node = binary_tree_node(parent, value);

	/*If parent has no left child, set new_node here*/
	if (parent->left == NULL)
		parent->left = new_node;

	/*if it has a left child*/
	else
	{
		/*Set old left to be left child of new node*/
		new_node->left = parent->left;
		/*Set old left child to point to new node*/
		parent->left->parent = new_node;
		/*set parent left to new node as new left child*/
		parent->left = new_node;
	}
	return (new_node);
}
