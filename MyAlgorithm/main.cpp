#include "binaryTree/BinaryTree.h"

int main() {
	cout << "hello algorithm" << endl;

	BinaryTree*bin = new BinaryTree;
	TreeNode*tree = BinaryTree::getTree();

	vector<int>vec = {};
	vec = bin->preorderTraversal(tree);
	cout << "===========前序遍历==============" << endl;
	for (vector<int>::iterator it=vec.begin();it!=vec.end();++it)
	{
		cout << *it << "\t";
	}

	vec = bin->inorderTraversal(tree);
	cout <<endl<< "===========中序遍历==============" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << "\t";
	}

	vec = bin->postorderTraversal(tree);
	cout <<endl<< "===========后序遍历==============" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << "\t";
	}

	int depth = bin->getMaxDepthByRecursion(tree);
	cout << endl << "==========递归求最大深度：==============" << endl;
	cout << depth<< "\t";

	bool bSymmetric = bin->isSymmetric(tree);
	cout << endl << "==========递归判断对称二叉树：==============" << endl;
	cout << bSymmetric << "\t";


	bool hasPathSum = bin->hasPathSum(tree,999);
	cout << endl << "==========112.路径总和：==============" << endl;
	cout << hasPathSum << "\t";

	vector<int>a, b;
	TreeNode* result = bin->buildTree(a, b);

 	return 0;
}