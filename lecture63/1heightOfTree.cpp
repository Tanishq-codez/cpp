// height-depth of binary tree
// height- longest path btw root node and a leaf node ;
// calculate all -> find maximum

// self approach - brute force

#include <iostream>
#include <vector>
#include <algorithm>
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

// note:you cant use this-> keyword below ;
//  can only be used in class member functions
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

void treeHeight(node *root, vector<int> &v, int count)
{
    // node *temp = root;
    if (root == NULL)
    {
        v.push_back(count);
        return;
    }

    treeHeight(root->left, v, count + 1);
    treeHeight(root->right, v, count + 1);
}

int main()
{
    node *root = NULL;
    root = buildtree(root);
    vector<int> v;
    int count = 1;
    treeHeight(root, v, count);

    // include <algorithm>
    int height = *max_element(v.begin(), v.end());
    cout << "height of tree is " << height;
}
