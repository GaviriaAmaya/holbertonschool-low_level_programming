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
