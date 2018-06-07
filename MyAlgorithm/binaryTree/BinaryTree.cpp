#include "BinaryTree.h"

BinaryTree::BinaryTree()
{
}


BinaryTree::~BinaryTree()
{
}

vector<int> BinaryTree::preorderTraversal(TreeNode * root)
{
	vector<int> vec = {};
	if (root == NULL)return vec;
	stack<TreeNode*>S;
	S.push(root);
	TreeNode* p = root;
	while (!S.empty()) {
		p = S.top();
		S.pop();
		vec.push_back(p->val);
		if (p->right != NULL) {
			S.push(p->right);
		}
		if (p->left != NULL) {
			S.push(p->left);
		}
	}
	return vec;
}
/*
getTree:
				99
			   /  \
			  5    6
			/  \  / \
		   7    8 9  10
*/

TreeNode * BinaryTree::getTree()
{
	TreeNode* tree = new TreeNode(99);
	tree->left = new TreeNode(5);
	tree->right = new TreeNode(6);
	tree->left->left = new TreeNode(7);
	tree->left->right = new TreeNode(8);
	tree->right->left = new TreeNode(9);
	tree->right->right = new TreeNode(10);
	return tree;
}

vector<int> BinaryTree::inorderTraversal(TreeNode * root)
{
	vector<int>result = {};
	if (root == NULL)return result;
	stack<TreeNode*>S;
	
	return result;
}
