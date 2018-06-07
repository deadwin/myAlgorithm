#pragma once
#include "globalData/globalData.h"
class BinaryTree
{
public:
	BinaryTree();
	~BinaryTree();

	//求二叉树前序遍历
	vector<int> preorderTraversal(TreeNode*root);
	//获取一个二叉树
	static TreeNode* getTree();
	//求二叉树后序遍历
	vector<int> inorderTraversal(TreeNode*root);
	//求二叉树后序遍历
	vector<int> postorderTraversal(TreeNode* root);

};

