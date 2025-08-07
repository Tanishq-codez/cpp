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
    this->left = this->right = NULL; // valid
    // assignment operator reads from right to left
  }
};

node *buildtree(node *root)
{
  cout << "enter the data (-1 for NULL)";
  int d;
  cin >> d;
  // pointer main() mein banaya
  // idhar dynamic allocation krdi
  root = new node(d);
  if (d == -1)
    return NULL;
  // pehle sarre left child bharo
  cout << "for left node of " << d << " ";
  root->left = buildtree(root->left);
  // phir saare right child bharo
  cout << "for right node " << d << " ";
  root->right = buildtree(root->right);
  return root;
}

int main()
{
  node *root = NULL;
  root = buildtree(root);
}