// inorder   : LNR
// preorder  : NLR
// postorder : LRN
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

node *buildTree(node *root)
{
    cout << "enter data";
    int d;
    cin >> d;
    root = new node(d);
    if (d == -1)
        return NULL;
    cout << "for left node";
    root->left = buildTree(root->left);
    cout << "for right node";
    root->right = buildTree(root->right);
    return root;
}

void inorder(node *root)
{                     // LNR
    if (root == NULL) // base case
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{                     // NLR
    if (root == NULL) // base case
        return;
    cout << root->data << " ";
    preorder(root->left);

    preorder(root->right);
}

void postorder(node *root)
{                     // LRN
    if (root == NULL) // base case
        return;
    postorder(root->left);

    postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = NULL;

    root = buildTree(root);

    inorder(root);
}