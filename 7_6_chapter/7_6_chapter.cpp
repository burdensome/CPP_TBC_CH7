// inline함수 최적화하는데 정말 효과가 있는지?
#include <iostream>

using namespace std;

// inline 함수가 되게되면 마치 함수가 아닌 것 처럼 작동을한다 아래에 명시
inline int min(int x, int y)
{
    return x > y ? y : x;
}

int main()
{
    cout << min(5, 6) << endl;
    cout << min(3, 2) << endl;

    // 인라인 함수를 쓰면 위의 내용이 마치 아래 내용처럼 컴파일되어 처리가됨. 컴파일이 해주는 일이다.
    // 그래서 많은 프로그래머들이 인라인함수를 엄청 애용해서 사용하는 경우가 있다.
    // 그런데 사용함에 있어서 꼭 알아야 할 것이 있다.
    // inline을쓰는게 inline으로 무조건 한다 라고 하는게 아니고 inline으로 쓸 수 있으면 써라 라는 것이다.
    // 즉, 컴파일러가 진짜 inline을 해줄지 아닐지는 알기 어렵다.
    // 모든 함수를 inline으로 쓴다고해서 빨라지는게 절대로 아닙니다.
    // 이유는 요즘 컴파일러는 아주 똑똑해서 inline을 안쓴다고 하더라도 알아서 inline을 넣어주는 경우가 있다.
    // 그래서 요즘은 inline을 쓴다고 빨라진다는 보장이 없고 안쓴다고 안빨라진다는 보장이 없다.
    // 그래서 홍정모 교수님 개인적으로는 inline을 쓸 필요가 있는가 라고 생각하고 있고
    // inline을 통해서 최적화를 하면 좀 힘들어진다.
    // 코딩 테크닉으로 최적화를 하는 방법 보다는 software의 구조 자체를 바꾼다던가
    // 예를들면 객체지향 설계방식이 있고 data driven이 또 있어요 data driven으로 하드웨어 가속을 잘 받는식으로
    // cash miss를 줄이는 방식으로 코딩을 한다든가, gpu가속을 받는다든가, 병렬처리를 잘 하든가
    // 하는게 현대적인 방법이다.
    // 또 한가지 단점이 inline으로 된 함수가 굉장히 많고 컴파일러가 정말 inline으로 구현했다면
    // compile된 프로그램이 많이 커지게된다. 메모리 많이 싸니까 프로그램 커져도 괜찮아요 라고 생각할텐데
    // 코프로그램이 커지면 어쨋든 메모리자체가 왔다갔다 하는데 많은 시간이 걸리기 때문에 
    // 그 코드가 너무 커져서 inline을 사용한 효과를 못보게 될 경우도 있다. 이것도 그때그때 다 다르다.
    // 홍 교수님도 최적화를 하려면 엄청나게 시간이 걸린다.  
    cout << (5 > 6 ? 6 : 5) << endl;
    cout << (3 > 2 ? 2 : 3) << endl;

    return 0;
}