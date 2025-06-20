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
    cout << "for left node of " << d << endl;
    root->left = buildtree(root->left);
    cout << "for right node " << d << endl;
    root->right = buildtree(root->right);
    return root;
}

void lvl(node *root)
{
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();
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
int main()
{
    // create a root
    node *root = NULL;

    // creating a tree
    root = buildtree(root);

    // level order
    cout << "level order traversal";
    lvl(root);
}