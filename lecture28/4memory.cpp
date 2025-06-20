// heap(dynamic) vs stack(static)
// stack:jitni chahiye utni hi aayegi
#include <iostream>
using namespace std;

int main()
{
    // use "new" keyword for heap
    new char; // returns address - 1 memory block alloc in heap

    char *ch = new char; // 8 bytes in stack(ptr)+1  byte  in heap(char)

    new int[5];
    int *arr = new int[5]; // 8(ptr)+20(int) byte

    // ptr = 8 bytes for 64 bit system
    //     = 4 bytes for 32 bit system
    cout << sizeof(ch);

    // heap allocated memory must be freed explicitly
    // like free() used with malloc
    delete[] arr;
    delete ch;

    // avoid dangling ptr
    ch = NULL;
    arr = NULL;
}
