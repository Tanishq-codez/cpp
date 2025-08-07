// level order traversal : binary tree printing level wise
// breadh first search - use Queue
#include <iostream>
#include <queue>

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

void lvl(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // seprator for levels

    // har level ke baad loop phir se shuru
    while (!q.empty()) // no execution at while(NULL)
    {
        node *temp = q.front();
        q.pop();

        // seprator logic:
        // 1)iska mtlb hai ek poori line print hogayi hai;
        // jab bhi ek element print ho raha hai to apne childs ko push kr raha hai
        // so by 1) we can say ki poora child level queue mein push ho gaya hoga
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }

        // the -> operator is  for dereferencing a pointer and
        // accessing a member, like (*ptr).member. If ptr is NULL, you're essentially doing
        // (*NULL).member, which means you're trying to access memory at address 0. That memory
        // is not valid for your program, so the operating system will likely throw a segmentation
        // fault or access violation.
        else
        { // 1>front ka data print karaya
            cout << temp->data << " ";
            // 2>uska left right queue mwin push krdiya
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int main()
{
    // create a root
    node *root = NULL;

    // creating a tree
    root = buildtree(root);

    // level order
    cout << "level order traversal" << endl;
    lvl(root);
}