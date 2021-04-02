// 함수의 매개변수로 인수로 전달하는 여러가지 방법 중에서 가장 이해하기 쉽고 편리한
// 값에 의한 인수전달을 먼저 알아보겠습니다. 함수를 호출하는 입장에서 봤을때는 값에의한 호출
// call by value가 되겠죠. 
#include <iostream>

using namespace std;

// 값에 의한 전달은 외부에 영향을 끼치지 않는다.
void doSomething(int y)
{
    cout << "In func " << y << " " << &y << endl;
}

int main()
{
    // literal 값 하나가 int y로 복사가 되는거죠
    doSomething(5);

    int x = 6;

    cout << "In main " << x << " " << &x << endl;

    // x를 넣어주고있죠? x변수를 넣어주는게 아니고 x에 있는 6의 값만 전달되는 것이다.
    // 6이라는 값이 argument로써 전달되는 것이다.
    doSomething(x);
    doSomething(x + 1);

    return 0;
}