#include <iostream>
using namespace std;
void update(int **p2)
{
    p2 = p2 + 1;     // change no
    *p2 = *p2 + 1;   // change yes
    **p2 = **p2 + 1; // change yes
}
int main()
{
    int p = 5;
    int *p1 = &p;
    int **p2 = &p1;

    update(p2);
}