// tree - non linear data stucture
// 1 parent node ---> multiple child nodes
// node -  1 data element
// root node -top node jahan se tree start hua
// sibling nodes - same parent
// ancestor(upar waale)<->descendant(niche waale)
//  leaf(ontri) - node with no child node

#include <iostream>
using namespace std;
class node
{
public:
  int data;
  node *left;
  node *right;

  node(int data)
  {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

node *buildtree(node *root)
{
  cout << "enter the data";
  int d;
  cin >> d;
  root = new node(d);
  if (d == -1)
    return NULL;
  cout << "for left node of " << d << " ";
  root->left = buildtree(root->left);
  cout << "for right node " << d << " ";
  root->right = buildtree(root->right);
  return root;
}

int main()
{
  node *root = NULL;
  root = buildtree(root);
}