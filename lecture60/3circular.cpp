// everything is same just if queue is full ; rear goes to zero
// !!!!! some condn checks will fail so fix that !!!!!
#include <iostream>
using namespace std;
class queue
{
  int *arr;
  int front;
  int rear;
  int size;

public:
  // constructor
  queue(int size)
  {
    this->size = size;
    arr = new int[size];
    front = 0;
    rear = 0;
  }

  // you have to make custom destructor if you have dynamic allocation
  ~queue()
  {
    delete[] arr;
  }
  // priority && > ||
  bool isfull()
  {
    if (front == 0 && rear == size - 1 || rear == (front - 1) % size)
    {
      return true;
    }
    else
      return false;
  }
  bool isempty()
  {
    if (front)
    {
    }
  }
};
int main()
{
  queue(10);
}