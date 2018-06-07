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

};

