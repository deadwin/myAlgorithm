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
enum {
	MEIHUA =0x00,
	HONGTAO=0x10,
	FANGKUAI=0x20,
	HEITAO=0x30,
	JOKER=0x40,
	LAIZI =0x50
};



map<int, vector<int>> ttt(const vector<int>&vecCardValue) {
	map<int, vector<int>>mCard;
	for (auto card:vecCardValue) {
		switch (card&0xf0)
		{
		case MEIHUA:
			cout << "meihua" << endl;
			mCard[MEIHUA].push_back(card);
			break;
		case HONGTAO:
			mCard[HONGTAO].push_back(card);
			break;
		case HEITAO:
			mCard[HEITAO].push_back(card);
			break;
		case FANGKUAI:
			mCard[FANGKUAI].push_back(card);
			break;
		case JOKER:
			mCard[JOKER].push_back(card);
			break;
		case LAIZI:
			mCard[LAIZI].push_back(card);
			break;
		default:
			break;
		}
	}


	for (int i = 0; i < mCard.size(); ++i) {
		map<int, vector<int>> tmpVec;
		sort(mCard[i].begin(),mCard[i].end());
		for (auto card : mCard[i]) {
			tmpVec[card & 0x0f].push_back(card&0x0f);
		}
		for (auto it = tmpVec.begin();it!=tmpVec.end();++it)
		{
			
		}

	}

	return mCard;
}




int main() {
	cout << "hello algorithm" << endl;
	binaryTreeTest();
	test278();

	vector<int>vecCard = { 0x05,0x06,0x14,0x20,0x35,0x42 };
	ttt(vecCard);

	return 0;
}