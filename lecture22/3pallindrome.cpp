// 2 pointers approch se start end compare krte jao
// break condition if they are not equal
// malayalam is a pallindrome but not Malayalam
// to inlcude uppercase make a fxn that converts upper to lowercase(ch-'A')

#include <iostream>
#include <cstring>
#include<cctype> //to use isalnum(),tolower()
using namespace std;
int main()
{
    char str[] = "N@o2@2o!n";
    int s=str[0];
    int e=str[strlen(str)-1];
    strupr(str);
    //  check palindrome without considering speacial characters / spaces


    //cool ch-'0'=num ;
}
