//매개변수 인수를 전달하는 방법 중에서 주소 즉 포인터를 사용하여 전달하는 방법을 설명
// call by address 가 되겟죠? 
#include <iostream>
using namespace std;

typedef int* pint;

void foo(double degrees, double *sin_out, double *cos_out)
{
    *sin_out = 1.0;
    *cos_out = 2.0;
}

void foo(const int *const ptr, int *arr. int length)
{
    for (int i = 0; i < length; ++i)
        cout << arr[i] << endl;
    arr[0] = 1.0;
    
    int x = 1;
    //ptr = &x;
}

int main()
{
    int value = 5;

    cout << value << " " << &value << endl;

    int* ptr = &value;

    cout << value << endl;
   //// foo(ptr);
   // foo(&value);
    //foo(5);
    cout << value << endl;

    double degrees = 30;
    double sin, cos;
   
    foo(degrees, &sin, &cos);
    cout << sin << " " << cos << endl;

    return 0;
}