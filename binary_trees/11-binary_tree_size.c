#include "binary_trees.h"
/**
 * binary_tree_size - Measure the length of a binary tree
 * @tree: Pointer to the root of the tree
 * Return: Size of the tree if success. Null if it fails
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
