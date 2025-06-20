// everything is same just if queue is full ; rear goes to zero
// !!!!! some condn checks will fail so fix that
#include <iostream>
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
        front = 0;
        rear = 0;
    }

    void enqueue(int data)
    {
        if (rear < size)
        {
            arr[rear] = data;
            rear++;
            if (rear == size)
                rear = 0;
        }
        else
            cout << "queue full";
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