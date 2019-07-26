#include "binary_trees.h"
/**
 * binary_tree_node - Create a binary tree node.
 *
 * @parent: Address of parent node.
 * @value: Value of new node.
 *
 * Return: Pointer to new node or NULL.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
