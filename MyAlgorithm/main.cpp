#include "binaryTree/BinaryTree.h"

int main() {
	cout << "hello algorithm" << endl;

	BinaryTree*bin = new BinaryTree;
	TreeNode*tree = BinaryTree::getTree();

	vector<int>vec = {};
	vec = bin->preorderTraversal(tree);
	cout << "===========ǰ�����==============" << endl;
	for (vector<int>::iterator it=vec.begin();it!=vec.end();++it)
	{
		cout << *it << "\t";
	}

	vec = bin->inorderTraversal(tree);
	cout <<endl<< "===========�������==============" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << "\t";
	}

	vec = bin->postorderTraversal(tree);
	cout <<endl<< "===========�������==============" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << "\t";
	}

	int depth = bin->getMaxDepthByRecursion(tree);
	cout << endl << "==========�ݹ��������ȣ�==============" << endl;
	cout << depth<< "\t";

	bool bSymmetric = bin->isSymmetric(tree);
	cout << endl << "==========�ݹ��ж϶Գƶ�������==============" << endl;
	cout << bSymmetric << "\t";


	bool hasPathSum = bin->hasPathSum(tree,999);
	cout << endl << "==========112.·���ܺͣ�==============" << endl;
	cout << hasPathSum << "\t";

	vector<int>a = { 9,3,15,20,7 }, b = { 9,15,7,20,3 };
	TreeNode* result = bin->buildTree(a, b);

 	return 0;
}