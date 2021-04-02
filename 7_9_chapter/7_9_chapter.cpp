// 함수포인터
#include <iostream>
#include <array>
#include <functional>   // c++ 11에서 나옴
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


// 깔끔하게 정리하는 방법
//typedef bool (*check_fcn_t)(const int&);
using check_fcn_t = bool (*)(const int&);
// 깔끔하게 정리하는 방법 중 c++ 11이상부터

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
    //cout << func << endl;   // 함수도 포인터다!!
    //func();

    // 함수도 주소를 갖고있다. 그러면 변수도 주소를가지고 뭔가를 할 수 있었지?
    // 그럼 함수도 주소를 가지고 뭔가를 할 수 있는데 그걸 알려주겠다.
    // int(*fcnptr)() --> return 값이 int, 함수포인터 ()로 parameter가 동일하게 없고 *fcnptr로 포인터변수를 정한 것
    // *fcnptr의 이름은 하고싶은거 하면 됨.
    //int(*fcnptr)(int) = func;  // 초기화

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