#include "binaryTree/BinaryTree.h"
#include "278/firstBadVersion.h"
#include "836/RectangleOverlap.hpp"
#include "garbage/garbage.hpp"
#include "array/array_primary.h"
void binaryTreeTest() {
	BinaryTree*bin = new BinaryTree;
	TreeNode*tree = BinaryTree::getTree();

	vector<int>vec = {};
	vec = bin->preorderTraversal(tree);
	cout << "===========ǰ�����==============" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << "\t";
	}

	vec = bin->inorderTraversal(tree);
	cout << endl << "===========�������==============" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << "\t";
	}

	vec = bin->postorderTraversal(tree);
	cout << endl << "===========�������==============" << endl;
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << "\t";
	}

	int depth = bin->getMaxDepthByRecursion(tree);
	cout << endl << "==========�ݹ��������ȣ�==============" << endl;
	cout << depth << "\t";

	bool bSymmetric = bin->isSymmetric(tree);
	cout << endl << "==========�ݹ��ж϶Գƶ�������==============" << endl;
	cout << bSymmetric << "\t";


	bool hasPathSum = bin->hasPathSum(tree, 122);
	cout << endl << "==========112.·���ܺͣ�==============" << endl;
	cout << hasPathSum << "\t";

	vector<int>a = { 9,3,15,20,7 }, b = { 9,15,7,20,3 };
	TreeNode* result = bin->buildTree(a, b);
}
void test278() {
	cout << endl << "==========278.First Bad Version��==============" << endl;
	firstBadVersion sol = firstBadVersion();
	int res = sol.isFirstBadVersion(2126753390);
	cout << res << endl;

}


void card_test() {

}



struct Node {
	int val;
	Node *left;
	Node *right;
	Node *next;
};


Node* connect(Node* root) {
	vector<Node*> nodeStack = {};
	nodeStack.push_back(root);
	Node* point, * head;

	while (nodeStack.size() != 0) {
		int size = nodeStack.size();
		point = nodeStack.front();
		head = point;
		nodeStack.erase(nodeStack.begin());
		size--;
		while (size != 0) {
			point->next = nodeStack.front();

			if (point->right) {
				nodeStack.push_back(point->right);
			}
			if (point->left) {
				nodeStack.push_back(point->left);
			}
			point = point->next;
			size--;
		}
	}
	return root;
}

int main() {
	cout << "hello algorithm" << endl;
	cout << "a";
	vector<int>vec = { 6,4,3,8,2,9,7 };

	Solution s;
	vec = { 0,0,0,1,1,3,3,3,4,4,5 };
	s.removeDuplicates(vec);

	auto n = new Node();
	n->next = NULL;
	n->left = NULL;
	n->right = NULL;
	n->val = 1;
	connect(n);

	
	return 0;
}