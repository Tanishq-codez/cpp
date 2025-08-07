// balanced tree =difference btw height of left and right subtree <= 1 for all nodes
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
        this->right = this->left = NULL;
    }
};
node *buildtree(node *root)
{
    int d = -1;
    cout << "enter data";
    cin >> d;
    if (d == -1)
        return NULL;
    root = new node(d);
    cout << "for left node";
    root->left = buildtree(root->left);
    cout << "for right node";
    root->right = buildtree(root->right);
    return root;
}

bool isBalanced(node* root){
    if(root==NULL) return true ;
    //phir wahi same recursion bottom to top 
    bool left = isBalanced(root->left) ;
    bool right = isBalanced(root->right) ;
    
    bool diff = height()
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    bool isBalanced(root);
}