#include "binary_trees.h"
/**
 * binary_tree_depth - Measure the depth of a node
 * @tree: Pointer to the tree
 * Return: Depth of the tree. If fails, Null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if(tree == NULL)
		return (0);

	if (tree->parent)
		return (binary_tree_depth(tree->parent) + 1);

	return (0);
}
