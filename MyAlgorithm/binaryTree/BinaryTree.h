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
	//递归求二叉树最大深度
	int getMaxDepthByRecursion(TreeNode* root);
	//判断对称二叉树
	bool isSymmetric(TreeNode* root);
private:
	//判断对称二叉树
	bool isSymmetric(TreeNode* left, TreeNode*right);
};

