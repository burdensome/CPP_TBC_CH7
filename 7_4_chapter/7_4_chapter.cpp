//�Ű����� �μ��� �����ϴ� ��� �߿��� �ּ� �� �����͸� ����Ͽ� �����ϴ� ����� ����
// call by address �� �ǰ���? 
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