#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts how many leaves are in a binary tree
 * @tree: Pointer  to the root of the tree
 * Return: Amount of leaves if success. 0 if it fails
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	else
		return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
