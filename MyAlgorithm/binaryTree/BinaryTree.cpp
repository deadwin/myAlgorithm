#include "BinaryTree.h"

BinaryTree::BinaryTree()
{
}


BinaryTree::~BinaryTree()
{
}

vector<int> BinaryTree::preorderTraversal(TreeNode * root)
{
	vector<int> vec = {};
	if (root == NULL)return vec;
	stack<TreeNode*>S;
	S.push(root);
	TreeNode* p = root;
	while (!S.empty()) {
		p = S.top();
		S.pop();
		vec.push_back(p->val);
		if (p->right != NULL) {
			S.push(p->right);
		}
		if (p->left != NULL) {
			S.push(p->left);
		}
	}
	return vec;
}
/*
getTree:
				99
			   /  \
			  5    6
			/  \  / \
		   7    8 9  10
		  / \
		11   12
*/

TreeNode * BinaryTree::getTree()
{
	TreeNode* tree = new TreeNode(99);
	tree->left = new TreeNode(5);
	tree->right = new TreeNode(6);
	tree->left->left = new TreeNode(7);
	tree->left->right = new TreeNode(8);
	tree->right->left = new TreeNode(9);
	tree->right->right = new TreeNode(10);

	tree->left->left->left = new TreeNode(11);
	tree->left->left->right = new TreeNode(12);
	return tree;
}

vector<int> BinaryTree::inorderTraversal(TreeNode * root)
{
	vector<int>result = {};
	if (root == NULL)return result;
	stack<TreeNode*>S;
	TreeNode*p = root;
	while (p != NULL||!S.empty())
	{
		if (p != NULL) {
			S.push(p);
			p = p->left;
		}
		else {
			p = S.top();
			S.pop();
			result.push_back(p->val);
			p = p->right;
		}
	}
	
	return result;
}

vector<int> BinaryTree::postorderTraversal(TreeNode * root)
{
	vector<int>result = {};
	if (root == NULL)return result;
	stack<TreeNode*>S;
	S.push(root);
	TreeNode* p;
	TreeNode* flag = NULL;
	while (!S.empty()) {
		p = S.top();
		if ((p->left == NULL && p->right == NULL) || (flag != NULL && (flag == p->left || flag == p->right))) {
			result.push_back(p->val);
			S.pop();
			flag = p;
		}
		else {
			if (p->right)S.push(p->right);
			if (p->left)S.push(p->left);
		}
	}
	
	return result;
}

int BinaryTree::getMaxDepthByRecursion(TreeNode * root)
{
	if (root == NULL)return 0;
	int lDepth = getMaxDepthByRecursion(root->left) + 1;
	int rDepth = getMaxDepthByRecursion(root->right) + 1;
	return lDepth > rDepth ? lDepth : rDepth;
}

bool BinaryTree::isSymmetric(TreeNode * root)
{
	if (root == NULL)return true;
	return isSymmetric(root->left, root->right);
}

bool BinaryTree::hasPathSum(TreeNode * root, int sum)
{
	if (root == NULL)return false;
	else return bPathSum(root, sum);
}

TreeNode * BinaryTree::buildTree(vector<int>& inorder, vector<int>& postorder)
{
	if (inorder.size() == 0 || postorder.size() == 0)return NULL;
	if (postorder.size() != inorder.size()) return NULL;

	vector<int>inorder_l, inorder_r, postorder_l, postorder_r;
	int root_index = -1;
	int len = postorder.size();

	TreeNode* tree = new TreeNode(postorder[len - 1]);

	for (int i = 0; i < len; i++) {
		if (postorder[len - 1] == inorder[i]) {
			root_index = i;
			break;
		}
	}

	for (int i = 0; i < root_index; ++i) {
		postorder_l.push_back(postorder[i]);
		inorder_l.push_back(inorder[i]);
	}
	for (int i = root_index + 1; i < inorder.size(); ++i) {
		postorder_r.push_back(postorder[i - 1]);
		inorder_r.push_back(inorder[i]);
	}

	tree->left = buildTree(inorder_l, postorder_l);
	tree->right = buildTree(inorder_r, postorder_r);


	return tree;
}

bool BinaryTree::bPathSum(TreeNode * root, int sum)
{
	if (!root->left && !root->right)return sum == root->val;
	return (root->left&&bPathSum(root->left, sum - root->val)) || (root->right && bPathSum(root->right, sum - root->val));
}

bool BinaryTree::isSymmetric(TreeNode * left, TreeNode * right)
{
	if (left == NULL && right == NULL)return true;
	if (left == NULL&&right != NULL || left != NULL&&right == NULL || left->val != right->val) return false;
	return isSymmetric(left->left, right->right) && isSymmetric(left->right, right->left);
}

