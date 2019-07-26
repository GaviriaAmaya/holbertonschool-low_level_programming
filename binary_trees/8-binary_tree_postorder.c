#include "binary_trees.h"
/**
 * binary_tree_postorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the tree
 * @func:
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
