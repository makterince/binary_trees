#include "binary_trees.h"
/**
 *binary_tree_height - measures the height of a binary tree by the number
 *children in the tree
 *@tree: the  binary tree to be searched
 *Return: the count of the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight;
	size_t rightHeight;

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if (tree == NULL)
		return (0);
	if (tree != NULL)
	{
		if (leftHeight > rightHeight)
			return (leftHeight + 1);
		else
			return (rightHeight + 1);
	}
}
