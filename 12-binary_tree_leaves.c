#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: The number of leaves, or 0 if its NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	return binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
}
