#include "binary_trees.h"
/**
 * binary_tree_nodes -  counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes with at least one child. If tree is NULL, returns 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count;
	int leftCount = binary_tree_nodes(tree->left);
	int rightCount = binary_tree_nodes(tree->right);

	if (tree == NULL)
	{
		return (0); /* Base case: Empty tree */
	}
	count = (tree->left != NULL || tree->right != NULL) ? 1 : 0;
	return (count + leftCount + rightCount); /* Recursive count */
}
