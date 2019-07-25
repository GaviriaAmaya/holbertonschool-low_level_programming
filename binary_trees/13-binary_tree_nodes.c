#include "binary_trees.h"
/**
 * binary_tree_nodes - Count nodes from a parent
 * @tree: Pointer to the parent of the binary tree
 * Return: Number of nodes. If fails, return
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
