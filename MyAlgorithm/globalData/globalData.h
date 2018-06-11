#include <vector>
#include<stack>
#include<iostream>
#include <functional>
using std::stack;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
#ifndef NULL
#define NULL 0
#endif
struct TreeNode {
	int val;
	TreeNode*left;
	TreeNode*right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};