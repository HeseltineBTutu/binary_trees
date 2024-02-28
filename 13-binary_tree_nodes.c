#include "binary_trees.h"
/**
 * binary_tree_nodes -  counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: The number of nodes, 0 if its NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count;

	if (tree == NULL)
	{
		return (0);
	}
	count = (tree->left != NULL || tree->right != NULL) ? 1 : 0;
	return (count + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
