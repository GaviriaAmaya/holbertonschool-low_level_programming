#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if binary tree is full type
 * @tree: Pointer to the tree
 * Return: 0 If Null. 1 success
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
