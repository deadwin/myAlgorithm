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


void card_test() {

}



typedef struct NodeElem
{
	int data;
	NodeElem * Next = NULL;
}NodeElem;

typedef NodeElem* ElemList;



void insert(int data, ElemList list) {
	ElemList p = list;
	while (p->Next != NULL) {
		if (p->Next->data > data) {
			ElemList node = new NodeElem();
			node->data = data;
			node->Next = p->Next;
			p->Next = node;
			return;
		}
		else {
			p = p->Next;
		}
	}
	ElemList node = new NodeElem();
	node->data = data;
	node->Next = NULL;
	p->Next = node;
}
void deleteNode(int data, ElemList list) {
	ElemList p = list;
	while (p->Next != NULL) {
		if (p->Next->data == data) {
			auto node = p->Next;
			p->Next = p->Next->Next;
			free(node);
			return;
		}
		else {
			p = p->Next;
		}
	}
	cout << "can't find the data" << data << endl;
}


int main() {
	cout << "hello algorithm" << endl;
	cout << "a";
	vector<int>vec = { 6,4,3,8,2,9,7 };

	Solution s;
	vec = { 0,0,0,1,1,3,3,3,4,4,5 };
	s.removeDuplicates(vec);


	ElemList e = new NodeElem();
	
	ElemList point =  e;
	for (auto i = 0; i < 10; i++) {
		ElemList n = new NodeElem();
		n->data = i;
		point->Next = n;
		point = n;
	}

	point = e;
	do {
		point = point->Next;
		cout << point->data << endl;
	} while (point->Next != NULL);

	insert(-2, e);

	deleteNode(4, e);
	point = e;
	do {
		point = point->Next;
		cout << point->data << endl;
	} while (point->Next != NULL);


	ElemList p = (ElemList)malloc(sizeof(NodeElem));
	ElemList k = (ElemList)malloc(sizeof(NodeElem));


	for (auto i = 10; i < 15; i++) {
		ElemList node = new NodeElem();
		node->data = i;
		node->Next = point->Next;
		point->Next = node;
	}
	cout << endl;
	point = e;
	do {
		point = point->Next;
		cout << point->data << endl;
	} while (point->Next != NULL);
	return 0;
}