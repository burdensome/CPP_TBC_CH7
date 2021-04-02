// �Լ�������
#include <iostream>
#include <array>
#include <functional>   // c++ 11���� ����
using namespace std;
//
//int func(int x)
//{
//    return 5;
//}
//
//int goo()
//{
//    return 10;
//}

bool isEven(const int& number)
{
    if (number % 2 == 0) return true;
    else return false;
}

bool isOdd(const int& number)
{
    if (number % 2 == 1) return true;
    else return false;
}


// ����ϰ� �����ϴ� ���
//typedef bool (*check_fcn_t)(const int&);
using check_fcn_t = bool (*)(const int&);
// ����ϰ� �����ϴ� ��� �� c++ 11�̻����

void printNumbers(const array<int, 10>& my_array, 
    std::function<bool(const int&)> check_fcn)
{
    for (auto element : my_array)
    {
        if (check_fcn(element) == true) cout << element;
        //if (!print_even && element % 2 == 1) cout << element;
    }
    cout << endl;
}

int main()
{
    //cout << func << endl;   // �Լ��� �����ʹ�!!
    //func();

    // �Լ��� �ּҸ� �����ִ�. �׷��� ������ �ּҸ������� ������ �� �� �־���?
    // �׷� �Լ��� �ּҸ� ������ ������ �� �� �ִµ� �װ� �˷��ְڴ�.
    // int(*fcnptr)() --> return ���� int, �Լ������� ()�� parameter�� �����ϰ� ���� *fcnptr�� �����ͺ����� ���� ��
    // *fcnptr�� �̸��� �ϰ������ �ϸ� ��.
    //int(*fcnptr)(int) = func;  // �ʱ�ȭ

    //cout << fcnptr(1) << endl;

    //fcnptr = goo;

    //cout << fcnptr() << endl;

    std::array<int, 10> my_array{ 0, 1, 2,3,4,5,6,7,8,9 };

    std::function<bool(const int&)> fcnptr = isEven;

    printNumbers(my_array, fcnptr);
    fcnptr = isOdd;
    printNumbers(my_array, fcnptr);

    return 0;
}