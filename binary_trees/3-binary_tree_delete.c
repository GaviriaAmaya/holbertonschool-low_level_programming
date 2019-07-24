#include "binary_trees.h"
/**
 * binary_tree_delete - Free the space allocation of each node recursively
 * @tree: Pointer to each node of the tree
 *
 * Return: None
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	  return (NULL);

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);

	free(tree);
}
