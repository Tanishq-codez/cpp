// it the longest path possible btw two nodes
// 3 case : only left subtree ; right subtree ; through root node
// use previously made height function
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

int treeHeight(node *root)
{
    if (root == NULL)
        return 0;

    int left = treeHeight(root->left);
    int right = treeHeight(root->right);

    return max(left, right) + 1;
}

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

// time complexity is O(n2)
int treeWidth(node *root)
{
    if (root == NULL)
        return 0;
    int op1 = treeWidth(root->left);
    int op2 = treeWidth(root->right);
    int op3 = treeHeight(root->left) + treeHeight(root->right + 1);
    return max(op1, op2, op3);
}

// time complexity is O(n)
// learn to return multiple items by pairing
pair<int, int> fast(node *root)
{

    if (root == NULL)
    {
        pair<int, int> p = make_pair(0, 0);
        return p;
    }
    pair<int, int> left = fast(root->left);
    pair<int, int> right = fast(root->right);
    // first is width and second is height
    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int, int> ans;
    ans.first = max(op1, op2, op3);
    ans.second = max(left.second, right.second) + 1;
    return ans;
}

int fastWidth(node *root)
{
    return fast(root).first;
}
int main()
{
    node *root = NULL;
    root = buildtree(root);
    int width = treeWidth(root);
}