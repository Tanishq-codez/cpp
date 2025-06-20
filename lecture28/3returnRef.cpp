// not a gud practice : warning ayegi
#include <iostream>
using namespace std;

// return type is int& (returning reference to the temporary variable)
int &func(int a)
{
  int num = a;    // memory allocated here (but it has only local scope )
  int &ans = num; // refrence to local variable should not be returned
  return ans;
}
// same with pointer
// int *fun(int a){
//    int *ans = &a ;
//    return ans ;
// }

int main()
{
  int n = 5;
  func(n);
}