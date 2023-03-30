#include "binary_trees.h"
/**
 *binary_tree_size - measures the size of abinary tree
 *@tree: pointer to node of binary tree
 *Return: size or 0 if null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lefts = binary_tree_size(tree->left);
	size_t rights = binary_tree_size(tree->right);

	if (tree == NULL)
		return (0);
	return (1 + lefts + rights);
}
