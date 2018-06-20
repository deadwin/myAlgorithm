#include "binaryTree/BinaryTree.h"
#include "278/firstBadVersion.h"
#include "836/RectangleOverlap.hpp"
void binaryTreeTest() {
	BinaryTree*bin = new BinaryTree;
	TreeNode*tree = BinaryTree::getTree();

	vector<int>vec = {};
	vec = bin->preorderTraversal(tree);
	cout << "===========前序遍历==============" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << "\t";
	}

	vec = bin->inorderTraversal(tree);
	cout << endl << "===========中序遍历==============" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << "\t";
	}

	vec = bin->postorderTraversal(tree);
	cout << endl << "===========后序遍历==============" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << "\t";
	}

	int depth = bin->getMaxDepthByRecursion(tree);
	cout << endl << "==========递归求最大深度：==============" << endl;
	cout << depth << "\t";

	bool bSymmetric = bin->isSymmetric(tree);
	cout << endl << "==========递归判断对称二叉树：==============" << endl;
	cout << bSymmetric << "\t";


	bool hasPathSum = bin->hasPathSum(tree, 122);
	cout << endl << "==========112.路径总和：==============" << endl;
	cout << hasPathSum << "\t";

	vector<int>a = { 9,3,15,20,7 }, b = { 9,15,7,20,3 };
	TreeNode* result = bin->buildTree(a, b);
}
void test278() {
	cout << endl << "==========278.First Bad Version：==============" << endl;
	firstBadVersion sol = firstBadVersion();
	int res = sol.isFirstBadVersion(2126753390);
	cout << res << endl;

}





int main() {
	cout << "hello algorithm" << endl;
	binaryTreeTest();
	test278();


	return 0;
}