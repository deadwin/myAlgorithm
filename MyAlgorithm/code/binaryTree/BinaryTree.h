/*
Author:Ran Jin

Date:2018/06/19

Description:
*/

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
	//106. 从中序与后序遍历序列构造二叉树
	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder);
private:
	//判断对称二叉树
	bool isSymmetric(TreeNode* left, TreeNode*right);
	//路径总和
	bool bPathSum(TreeNode* root, int sum);
	//从中序与后序遍历序列构造二叉树
	TreeNode*subBulid(vector<int>& inorder, vector<int>& postorder, int index);
};
