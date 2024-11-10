// Program to swap the two numbers using different variables.

#include <iostream>
using namespace std;

int main()
{
  int a = 7, b = 3;
    cout << "Value before swapping a = " << a << ", b = " << b << endl;

    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "Value after swapping a = " << a << ", b = " << b << endl;
 return 0;

}
