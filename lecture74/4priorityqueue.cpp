// stl for min and max heap : queue
#include <iostream>
#include <queue>
using namespace std;
int main()
{
  // MAX HEAP
  priority_queue<int> maxheap;
  maxheap.push(2);
  maxheap.push(3);
  maxheap.push(8);
  maxheap.push(5);
  // operations : push , pop , top(root) , empty
  // MIN HEAP
  priority_queue<int, vector<int>, greater<int>> minheap;
}