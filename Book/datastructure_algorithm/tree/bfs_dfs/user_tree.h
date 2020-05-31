#pragma once

struct TreeNode
{
  TreeNode *left;
  TreeNode *right;
  int value;
};

typedef TreeNode *TreeNodePtr;

void user_tree__create_node(TreeNodePtr &root, int value);

void user_tree__preorder_traversal(TreeNodePtr root);
void user_tree__inorder_traversal(TreeNodePtr root);
void user_tree__postorder_traversal(TreeNodePtr root);
