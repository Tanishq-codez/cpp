#include <iostream>
using namespace std;
int main()
{
    int a = 6;     // 4byte , 32bit (generally depends on compiler)
    char ch = 'a'; // 1 byte , single commas
    bool b = -4 ;  // 1 bit , true/false==non 0 /0
    float f = 1.2; // 4 byte
    double _d= 1.2 ; // 8 byte , large float

    // variable name cant start with symbol , numb excpt under score

    cout<< b <<endl ; // bool prints 1 or 0 only

    int size = sizeof(_d);
    cout << "size of double: " <<size<< " exactly " <<endl ;

   // typecasting: jo variable name ke saath type hoga (left side mein)usme autoconvert
   // implicit typecasting here
   int x = 'a'; //ascii a = 97  A=65
   cout << x << endl ;

   char cx = 65 ;  // int to char impicitly
   cout << cx << endl;

   int y = 12.2222222 ;
   cout<< y << endl;

   char cy = 9876543; // store only last 8 bits (1byte)
   cout<< cy << endl;

   int m = 65;
   // explicit typecasting
    char n = char(m) ;  // only time we use datatype on right side of =
    cout << n << endl ;

   // 1st bit 0 -- pos  , 1 -- neg
   // pos--->neg   2's complement

   unsigned int u = 2 ; //  stores only positive 


}
