// A binary tree is considered a max-heap if it satisfies the following conditions:

// Completeness: Every level of the tree, except possibly the last, is completely filled
//, and all nodes are as far left as possible.
// Max-Heap Property: The value of each node is greater than or equal to the values of its children.

// so make two bools to check each and a main bool fnc

// to check completeness : aisi node dhonndni hai jiska index total nodes se jyada ho jaye
// to check for heap order make a recursive comparision

// Structure of node
#include <iostream>
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = nullptr; // better and safer than NULL(c-style)
    }
};

class Solution
{
public:
    int count(Node *tree)
    {
        if (tree == nullptr)
            return 0;

        int ans = 1 + count(tree->left) + count(tree->right);
        return ans;
    }

    bool iscomplete(Node *tree, int i, int n)
    {
        if (tree == nullptr)
            return true;

        if (i >= n)
            return false;
        else
            return iscomplete(tree->left, 2 * i + 1, n) && iscomplete(tree->right, 2 * i + 2, n); // important concept
    }

    bool ordered(Node *tree)
    {
        if (tree == nullptr)
            return true;

        if (tree->left != nullptr && tree->left->data > tree->data)
        {
            return false;
        }

        if (tree->right != nullptr && tree->right->data > tree->data)
        {
            return false;
        }

        return ordered(tree->left) && ordered(tree->right);
    }

    bool isHeap(Node *tree)
    {
        int i = 0;
        int n = count(tree);
        if (iscomplete(tree, i, n) && ordered(tree))
        {
            return true;
        }
        else
            return false;
    }
};