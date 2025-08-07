// make tree entering data level wise
// lvl order mtlb : queue
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

void BuildFromLvl(node *&root)
{
  queue<node *> q;
  cout << "enter data";
  int d;
  cin >> d;
  root = new node(d);
  q.push(root);

  while (!q.empty())
  {
    node *temp = q.front();
    q.pop();
    cout << "for left node";
    int Ldata;
    cin >> Ldata;
    if (Ldata != -1)
    {

      temp->left;
    };
  }
}

int main()
{
  node *root = NULL;
  BuildFromLvl(root);
}