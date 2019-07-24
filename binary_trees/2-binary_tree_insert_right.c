#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a right-child to a node.
 * @parent: Address of the node to insert the right-child in.
 * @value: Value to store in the right_child.
 *
 * Return: Address of the right child or NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
  binary_tree_t *right_child, *old_child;

  if (parent == NULL)
    return (NULL);

  right_child = binary_tree_node(parent, value);
  if (right_child == NULL)
    {
      return (NULL);
    }

  if (parent->right != NULL)
    {
      old_child = parent->right;
      parent->right = right_child;
      right_child->right = old_child;
      old_child->parent = right_child;
    }
  else
    parent->right = right_child;

  return (right_child);
}
