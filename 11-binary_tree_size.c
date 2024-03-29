#include "binary_trees.h"
/**
 * binary_tree_size - Measure the size of a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The size of the binary tree, or 0 if the tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
