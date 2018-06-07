#include "BinaryTree.h"

int main() {
	cout << "hello algorithm" << endl;
	BinaryTree*bin = new BinaryTree;
	TreeNode*tree = BinaryTree::getTree();

	vector<int>vec = {};
	vec = bin->preorderTraversal(tree);
	for (vector<int>::iterator it=vec.begin();it!=vec.end();++it)
	{
		cout << *it << "\t";
	}
	return 0;
}