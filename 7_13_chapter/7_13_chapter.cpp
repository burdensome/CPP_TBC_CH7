#include <iostream>
#include <string>

using namespace std;

int main()
{
    // syntax error
    //int x

    //// semantic errors 문맥오류
    //int x;
    //cin >> x;

    //// 문장은 5보다 크다인데 실제 if문엔 5보다 크거나 같다로 되어있음 그럼 논리적인 오류라고 하는데
    //// 흔히 발생한다. 프로그래머가 아니면 찾기가 쉽지않다. 디버거를 사용하고 그렇게 잡아야한다.
    //if (x >= 5)
    //    cout << "x is greater than 5" << endl;

    // 방어적 프로그래밍을 하는 것에 대한 일정도 잡아야한다. 
    // violated assumption
    string hello = "Hello, my name is jack jack";

    cout << "Input from 0 to " << hello.size() - 1 << endl;

    while (true)
    {
        int ix;
        cin >> ix;
        if (ix >= 0 && ix <= hello.size() - 1)
        {
            cout << hello[ix] << endl;
            break;
        }
        else
            cout << "Please try again" << endl;
    }

    return 0;
}