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

	//�������ǰ�����
	vector<int> preorderTraversal(TreeNode*root);
	//��ȡһ��������
	static TreeNode* getTree();
	//��������������
	vector<int> inorderTraversal(TreeNode*root);
	//��������������
	vector<int> postorderTraversal(TreeNode* root);
	//104.��������������:�ݹ�
	int getMaxDepthByRecursion(TreeNode* root);
	//101.�ж϶Գƶ�����
	bool isSymmetric(TreeNode* root);
	//112.·���ܺ�
	bool hasPathSum(TreeNode* root, int sum);
	//106. �����������������й��������
	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder);
private:
	//�ж϶Գƶ�����
	bool isSymmetric(TreeNode* left, TreeNode*right);
	//·���ܺ�
	bool bPathSum(TreeNode* root, int sum);
	//�����������������й��������
	TreeNode*subBulid(vector<int>& inorder, vector<int>& postorder, int index);
};
