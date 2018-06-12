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
	//�ݹ��������������
	int getMaxDepthByRecursion(TreeNode* root);
	//�ж϶Գƶ�����
	bool isSymmetric(TreeNode* root);
private:
	//�ж϶Գƶ�����
	bool isSymmetric(TreeNode* left, TreeNode*right);
};

