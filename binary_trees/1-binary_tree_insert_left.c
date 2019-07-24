#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a left child node to a node.
 *
 * @parent: Address of the node to insert a left child.
 * @value: Value of the new node.
 *
 * Return: Address of the new node or NULL.
 */

#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a left child node to a node.
 *
 * @parent: Address of the node to insert a left child.
 * @value: Value of the new node.
 *
 * Return: Address of the new node or NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *new_node, *temp;

  if (parent == NULL)
    return (NULL);

  new_node = binary_tree_node(parent, value);
  if (new_node == NULL)
    return (NULL);

  if (parent->left != NULL)
    {
      temp = parent->left;
      parent->left = new_node;
      new_node->left = temp;
      temp->parent = new_node;
    }
  else
    {
      parent->left = new_node;
    }

  return (new_node);
}
