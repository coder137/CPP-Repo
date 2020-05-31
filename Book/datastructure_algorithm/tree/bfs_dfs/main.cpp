#include <iostream>
#include <queue>
#include <stack>

#include "user_tree.h"

using namespace std;

bool breadth_first_search(TreeNodePtr &root, int searchValue);
bool depth_first_search(TreeNodePtr &root, int searchValue);

int height(TreeNodePtr &root);

int main()
{
  cout << "Hello World" << endl;

  TreeNodePtr root;
  user_tree__create_node(root, 10);
  user_tree__create_node(root->left, 12);
  user_tree__create_node(root->right, 13);

  // left
  user_tree__create_node(root->left->left, 18);
  user_tree__create_node(root->left->right, 16);

  // right
  user_tree__create_node(root->right->left, 23);
  user_tree__create_node(root->right->right, 21);

  // NOTE, Additional parameters added so that we can test the height function
  // user_tree__create_node(root->right->right->left, 56);
  // user_tree__create_node(root->right->right->left->right, 20);

  // user_tree__inorder_traversal(root);

  cout << "Breadth First Search" << endl;
  bool isFound = breadth_first_search(root, 22);
  cout << isFound << endl;

  cout << "Depth First Search" << endl;
  isFound = depth_first_search(root, 90);
  cout << isFound << endl;

  cout << "Height: " << height(root) << endl;

  return 0;
}

int height(TreeNodePtr &root)
{
  if (root == NULL)
  {
    return 0;
  }

  return 1 + max(height(root->left), height(root->right));
}

bool breadth_first_search(TreeNodePtr &root, int searchValue)
{
  queue<TreeNodePtr> q;
  q.push(root);

  while (1)
  {
    if (q.empty())
    {
      break;
    }

    TreeNodePtr temp = q.front();
    q.pop();

    cout << temp->value << endl;
    if (searchValue == temp->value)
    {
      return true;
    }

    if (temp->left)
    {
      q.push(temp->left);
    }

    if (temp->right)
    {
      q.push(temp->right);
    }
  }

  return false;
}

bool depth_first_search(TreeNodePtr &root, int searchValue)
{
  stack<TreeNodePtr> s;

  s.push(root);

  while (1)
  {
    if (s.empty())
    {
      break;
    }
    TreeNodePtr temp = s.top();
    s.pop();

    cout << temp->value << endl;
    if (temp->value == searchValue)
    {
      return true;
    }

    if (temp->right)
    {
      s.push(temp->right);
    }

    if (temp->left)
    {
      s.push(temp->left);
    }
  }

  return false;
}
