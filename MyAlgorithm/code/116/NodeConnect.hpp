/*
Author:Ran Jin

Date:2019/07/13

Description:
	116. 填充每个节点的下一个右侧节点指针
	117. 填充每个节点的下一个右侧节点指针 II

	两题解法一样
*/
struct Node {
	int val;
	Node* left;
	Node* right;
	Node* next;
};
#pragma once
#include "globalData/globalData.h"
class NodeConnect
{
public:
	Node* connect(Node* root) {
		if (!root) return NULL;

		std::vector<Node*>vec = {};
		vec.push_back(root);
		while (vec.size() != 0) {
			int size = vec.size();
			for (int i = 0; i < size; i++) {
				Node* temp = vec[i];
				if (i < (size - 1)) {
					temp->next = vec[i + 1];
				}
				else {
					temp->next = NULL;
				}
				if (temp->left) {
					vec.push_back(temp->left);
				}
				if (temp->right) {
					vec.push_back(temp->right);
				}
			}
			for (int i = 0; i < size; i++) {
				vec.erase(vec.begin());
			}
		}
		return root;
	}
};
