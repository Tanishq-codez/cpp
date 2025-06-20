// queue (fifo) : first in first out (bus stop)
// enqueue->at rear (jaise line mein lagna)
// dequeue->from front (bus mein chadna)
// operation: push() ; pop() ; isempty(); size() ; front()

// scrach implementation : array or linklist

// using array -> all the functons have just if cond O(1);
#include <iostream>
using namespace std;
class queue
{
    int *arr;
    int front;
    int rear;
    int size;

public: // constructor
    queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    ~queue()
    {
        delete[] arr;
    }

    void enqueue(int data)
    {
        if (front == 0 && rear == size - 1 || rear == (front - 1) % size)
            cout << "queue full";

        if (rear < size)
        {
            arr[rear] = data;
            rear++;
        }
    }

    void dequeue()
    {
        if (rear == 0)
        {
            cout << "already empty";
        }
        else
        {
            arr[front] = -1; // jo number tha usse hatana bhi to hai
            front++;
        }
        if (front == rear)
        {
            front = 0;
            rear = 0;
        }
    }
    bool isempty()
    {
        if (front == rear)
            return true;
        else
            return false;
    }
    int getfront()
    {
        if (front == rear)
            return -1;
        else
            return arr[front];
    }
};

int main()
{
    queue q(10);
    q.enqueue(19);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
    q.enqueue(14);
    q.enqueue(15);
    q.enqueue(16);

    cout << q.getfront();
}