#include "binary_trees.h"
/**
 *binary_tree_depth - measures the depth of a node
 *@tree: pointer to the node for measurement
 *Return: depth or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t leftDepth = binary_tree_depth(tree->left);
	size_t rightDepth = binary_tree_depth(tree->right);

	if (tree == NULL)
		return (0);

	if (leftDepth > rightDepth)
		return (leftDepth + 1);
	else
		return (rightDepth + 1);
}
