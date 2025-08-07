// last question without vector - pure recurrsion
// babbars approach
// time complexity : n nodes , each visited once , O(n)
// space complexity : O(n) , worst case , skew tree
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

// pattern : same type ke chote question mein agar kuch operation laga ke answer ata ho to recurrsion se ho jayega
int treeHeight(node *root)
{
    if (root == NULL)
        return 0;

    int left = treeHeight(root->left);
    int right = treeHeight(root->right);

    return max(left, right) + 1;
}

int main()
{
    node *root = NULL; // not building tree again
}