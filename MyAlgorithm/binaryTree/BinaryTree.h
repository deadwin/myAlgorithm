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
	//104.二叉树的最大深度:递归
	int getMaxDepthByRecursion(TreeNode* root);
	//101.判断对称二叉树
	bool isSymmetric(TreeNode* root);
	//112.路径总和
	bool hasPathSum(TreeNode* root, int sum);
private:
	//判断对称二叉树
	bool isSymmetric(TreeNode* left, TreeNode*right);
};

