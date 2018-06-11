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

 	return 0;
}