#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the 
 * 		right-child of another node.
 *
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the newly created node, NULL on failure
 *         and if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*Check if parent is NULL*/
	if (parent == NULL)
		return (NULL);

	/*create new node, properties set within*/
	new_node = binary_tree_node(parent, value);

	/*If parent has no right child, set new_node here*/
	if (parent->right == NULL)
		parent->right = new_node;

	/*if it has a right child*/
	else
	{
		/*Set old right to be right child of new node*/
		new_node->right = parent->right;
		/*Set old right child to point to new node*/
		parent->right->parent = new_node;
		/*set parent left to new node as new left child*/
		parent->right = new_node;
	}
	return (new_node);
}
