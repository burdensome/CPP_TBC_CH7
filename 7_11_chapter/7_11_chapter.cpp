#include <iostream>
#include <vector>
using namespace std;

void printStack(const std::vector<int>& stack)
{
    for (auto & e : stack)
        cout << e << " ";
    cout << endl;
}

int main()
{
    // 아래와 같이 선언한다면 내부절으로는
    // int *v_ptr = new int[3] {1,2,3};
    // 꼭 이렇게 작동하는건 아니지만 아무튼 위와 같이 비슷하게 되어있다.
    //std::vector<int> v{ 1,2,3 };

    //// stack처럼 vector를 사용하는 방법
    //std::vector<int> stack;

    //// resize할 떄 메모리를 반납하고 다시 재할당하면 시간이 걸리니깐
    //// 그냥 기존에 사용하던 메모리 크기를 사용하면서 그냥 2개 인 '척' 한다.
    ////v.resize(2);

    //// capacity를 한번 잡아보자
    //v.reserve(1024);

    //// vector는요 size, capacity 란게 있어요 capacity는 용량을 뜻해요. 근데 두 개가 뭐가달라여?
    //// heap같은 경우는 어디에 공간을 잡아올지가 오래걸려요. 뭐 컴터가 하는거니 엄청 빠른데
    //// 하지만 큰 프로그램을 돌릴 땐 영향을 미칠 수 있는 수준입니다.
    //// new하고 delete하는건 많이 느립니다. 많이 안쓰시는 것이 좋습니다/
    //// vector는 내부적으로 new/delete을 하는데 내부에서 new/delete이 어떻게 적게 불러지는 가에 따라서
    //// 속도를 빠르게 할 수 있지요. 그래서 capacity는 뭐냐면 실제로는 capacity 만큼의 메모리를 가지고 있어요
    //// size는 그 중에서 몇 개만 메모리를 사용한다는 의미입니다.

    ///*for (auto& e : v)
    //    cout << e << " ";
    //cout << endl;*/

    //for (unsigned int i = 0; i < v.size(); ++i)
    //    cout << v[i] << " ";
    //cout << endl;
    // 
    //cout << v.size() << " " << v.capacity() << endl;

    ////cout << v.at(2) << endl;

    //int* ptr = v.data();

    //cout << ptr[2] << endl;

    std::vector<int> stack;

    // 왜 아래와 같이 pushback을 하나?
    // reserver를 이용해서 capacity를 늘릴 필요가 없게 만들어서
    // new/delete를 사용하지 않아 속도가 빠릅니다.
    // 단, reserver를 너무 크게 잡으면 메모리 낭비가 되버리겠지?

    stack.push_back(3);
    printStack(stack);
    stack.push_back(5);
    printStack(stack);
    stack.push_back(7);
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);

    return 0;
}