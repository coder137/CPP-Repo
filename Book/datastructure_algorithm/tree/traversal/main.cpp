#include <iostream>

#include "user_tree.h"

using namespace std;

int main()
{
  cout << "Hello World" << endl;

  TreeNode *root;
  user_tree__create_node(root, 10);
  user_tree__create_node(root->left, 12);
  user_tree__create_node(root->right, 32);

  cout << "Preorder Traversal" << endl;
  user_tree__preorder_traversal(root);

  cout << "Inorder Traversal" << endl;
  user_tree__inorder_traversal(root);

  cout << "Postorder Traversal" << endl;
  user_tree__postorder_traversal(root);

  return 0;
}
