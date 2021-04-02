// 프로그래밍 시간의 대부분은 프로그래밍 시간이 아니고 debugging에 많은 시간이 소요됩니다.
// 디버깅을 할 때도 컴파일러의 도움을 받을 수 있다면 빨리 할 수 있겠죠
// compile을 도움받아 디버깅하는 assert 를 배워보겠다.
#include <iostream>
#include <cassert>  // assert.h
#include <array>

using namespace std;

void printValue(const std::array<int, 5>& my_array, const int& ix)
{
    // 홍교수님은 두 개로 나눠서 쓰십니다. 이뉴는 에러가 나도 두개 중 뭐가 문제인지 바로 알 수 있기 때문!!
    // &&연산자를 사용하는게 꼭 좋은게 아니구나
    assert(ix >= 0);
    assert(ix <= my_array.size() - 1);

    std::cout << my_array[ix] << std::endl;
}

int main()
{
    const int number = 5;

    std::array<int, 5> my_array{ 1,2,3,4,5 };

    //printValue(my_array, 100);

    const int x = 10;

    assert(x == 5);

    // static assert는 compile time에 결정되는 경우만 사용 될 수 있음.
    static_assert(x == 5, "x should be 5 (jm)");
    // ... 

    // debug모드 일 떄만 작동한다. release 모드일때는 작동 안함.
    // 만약 number should be 5 라고 한다면 결국 프로그래머가 왔을 때 5인지 찍어봐야하는데.
    // 이것 보다는 커멘트 남길 필요 없이 assert를 박아버리면 된다.
    // release사용 할 때는 프로그램이 빨리 돌아야하니 이런 디버깅에 관련된건 실행하지 않는다.
    // 그래서 debug모드 일떄만 작동
    assert(number == 5);

    return 0;
}