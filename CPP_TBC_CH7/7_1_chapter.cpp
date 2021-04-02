#include <iostream>

using namespace std;

// 정수형 x가 foo라는 함수의 파라미터이고 정수형 y가 foo라는 함수의 파라미터
int foo(int x, int y);

// 함수 내에는 매개변수라고 지칭한다.
// 매개변수x, 매개변수y
// 내부적으로 값을 받을 때 int x, int y가 선언이 되고 초기화가되어 복사된 값이 들어가게 된다.
int foo(int x, int y)
{
    //int x, int y; 이렇게 함수 안에 들어와 있는 것 처럼 된다.
    return x + y;
}   // x and y are destroyed here


int main()
{
    int x = 1, y = 2;

    // 함수로 들어가는 이런 값을 argument 즉, 인자 라고 부른다
    foo(6, 7);  //6, 7: arguments (actual parameters)
    foo(x, y + 1);

    return 0;
}