// 재귀적 함수 호출(recursive function call - 줄여서 recursion)
// 자기하고 이름이 똑같은 함수를 다시 호출하는 것 입니다.
// recursion은 구현하기는 더 쉽다. 다만 stack을 사용하기 떄문에
// 호출하는 depth가 한계가 있다.
// 그래서 가급적이면 iteration을 사용하는게 좋다.
#include <iostream>

using namespace std;

void countDown(int count)
{
    cout << count << endl;
    // 막상 함수를 호출 할 때 결국 함수의 시작 주소를 가버리니
    // 재귀함수로 다시 호출을 한다고 하더라도 다시 실행을 하는 것이다.
    if(count > 0)
        countDown(count - 1);
}

int sumTo(int sumto)
{
    if (sumto <= 0)
        return 0;
    else if (sumto <= 1)
        return 1;
    else
    {
        const int sum_minus_one = sumTo(sumto - 1);
        return sumTo(sumto - 1) + sumto;
    }


}

int main()
{
    //countDown(5);

    cout << sumTo(10) << endl;

    return 0;
}