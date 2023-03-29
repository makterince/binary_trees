#include "binary_trees.h"
/**
 *binary_tree_height - measures the height of a binary tree by the number
 *children in the tree
 *@tree: the  binary tree to be searched
 *Return: the count of the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t leftHueight = binary_tree_height(tree->left);
	size_t rightHeight = binary_tree_height(tree->right);

	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	else
		return (rightHeight + 1);
}
