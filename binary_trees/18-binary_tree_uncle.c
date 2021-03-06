#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds siblings
 * @node: Pointer to find the sibling
 * Return: 1 if success. 0 if fails
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->n < node->parent->n)
		return (node->parent->right);

	else
		return (node->parent->left);
}
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node that can do sibling
 * Return: If success 1.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->n < node->parent->parent->n)
		return (node->parent->parent->right);

	else
		return (node->parent->parent->left);
}
