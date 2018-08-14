#pragma once
#include <vector>
#include<stack>
#include<iostream>
#include <functional>
#include<algorithm>
#include <map>
#include <string>
using std::stack;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::max;
using std::min;
using std::map;
using std::vector;
using std::string;
#ifndef NULL
#define NULL 0
#endif
struct TreeNode {
	int val;
	TreeNode*left;
	TreeNode*right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};
