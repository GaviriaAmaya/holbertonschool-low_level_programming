#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of the tree
 * @tree: Pointer to the tree
 * Return: Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}
/**
 * binary_tree_balance - Measures the balance factor
 * @tree: Pointer to the tree
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
