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
private:
	//�ж϶Գƶ�����
	bool isSymmetric(TreeNode* left, TreeNode*right);
};

