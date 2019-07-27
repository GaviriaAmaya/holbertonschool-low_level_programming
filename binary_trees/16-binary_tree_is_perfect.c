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
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: Pointer to the root of the tree
 * Return: Null if fails. 1 if success
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int aux;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	aux = binary_tree_is_perfect(tree->left) &&
	      binary_tree_is_perfect(tree->right);

	return (aux && binary_tree_height(tree->left) ==
		binary_tree_height(tree->right));
}
