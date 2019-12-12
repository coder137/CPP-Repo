#include "user_tree.h"

#include <iostream>
using namespace std;

void user_tree__create_node(TreeNodePtr &root, int value)
{
  root = new TreeNode();
  root->value = value;
}

void user_tree__preorder_traversal(TreeNodePtr root)
{
  if (root != nullptr)
  {
    cout << root->value << endl;
    user_tree__preorder_traversal(root->left);
    user_tree__preorder_traversal(root->right);
  }
}

void user_tree__inorder_traversal(TreeNodePtr root)
{
  if (root != nullptr)
  {
    user_tree__inorder_traversal(root->left);
    cout << root->value << endl;
    user_tree__inorder_traversal(root->right);
  }
}

void user_tree__postorder_traversal(TreeNodePtr root)
{
  if (root != nullptr)
  {
    user_tree__postorder_traversal(root->left);
    user_tree__postorder_traversal(root->right);
    cout << root->value << endl;
  }
}
