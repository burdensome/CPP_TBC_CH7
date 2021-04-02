// return 값을 어떻게 받을 것인가. 함수가 수행한 결과를 어떻게 돌려받을 것인가를 살펴보겠습니다.
#include <iostream>
#include <array>
#include <tuple>

using namespace std;

// 튜플을 사용해서 리턴값을 여러개 받는데 마치 std::tuple<int, double> 이 사용자 정의 자료형이 되버린다.
std::tuple<int, double> getTuple()
{
    int a = 10;
    double d = 3.14;
    return std::make_tuple(a, d);
}

// retrun by value
//int getValue(int x)
//{
//    int value = x * 2;
//    return value;
//}

// 이런 방식은 절대 추천하지 않는단다. 쓰지를 말자!
//int* getValue(int x)
//{
//    int value = x * 2;
//    return &value;
//}

// 이런 식으로 동적메모리를 할당하는 방법은 프로그래머를 힘들게 할 수 있다.
// return by address
int* allocateMemory(int size)
{
    return new int[size];
}

// return by reference
int& getValue(int x)
{
    int value = x * 2;
    return value;
}

// return by reference가 위처럼 쓰면 문제가되는데 그럼 쓸모가없냐? 그건 또 아니다.
// 아래와 같이 return 값을 사용하여 배열을 리턴하면 대체 왜하냐? 라고 생각이 되긴한데
// 수학 library같은 곳에서 사용이된다
int& get(std::array<int, 100>& my_array, int ix)
{
    return my_array[ix];
}

//정수 여러개를 리턴받고싶다
struct S
{
    int a, b, c, d;
};

//S getStruct()
//{
//    S my_s{ 1, 2, 3, 4 };
//}

int main()
{
    /*int *value = getValue(3);

    cout << *value << endl;*/

    /*int* array = allocateMemory(1024);

    delete[] array;*/

    // 이렇게되면요 getValue가 reference를 반환해서 reference가 잠깐 남아있는 상태에서
    // 글 reference가 가리키고 있는 변수의 실제 값이 이 value로 복사해서 들어오겠죠
    //int value = getValue(5);

    // 레퍼런스로 받으면 getValeu함수에서 value의 변수가 사라지니 이렇게 하면 안된다.    
    int &value = getValue(5);

    // return값을 받아서 출력을 할 때까지 잡아두고 있다가 난 할 일을 다했다하고 os로 메모리를 돌려준다.
    cout << value << endl;
    // 위에서 os로 메모리를 돌려주고 나니 아래는 쓰레기 값이 나오게된다.
    cout << value << endl;

    std::array<int, 100> my_array;
    my_array[30] = 10;

    // 이렇게 reference 리턴 함수로 사용해버리니 마치 배열이 변수처럼 사용이 되게된다.
    get(my_array, 30) *= 10;

    cout << my_array[30] << endl;

    // Return 값을 여러개 받을 수 있다
    // 이렇게 하면 여러 값을 받기위해서 매번 구조체를 넣어야해서 부하가 커지게된다.
    // 옛날에는 다 이렇게했었다. dirext X 이런거.. 이건 C-Style 코드
    // 하지만 c니까 속도는 더 빠르겟죠
 /*   S my_s = getStruct();
    my_s.a;*/

    // tuple사용 리턴 여러개
    //std::tuple<int, double> my_tp = getTuple();
    //cout << std::get<0>(my_tp) << endl; // a
    //cout << std::get<1>(my_tp) << endl; // d

    // tuple사용인데 대신 이건 c++17이상
    auto[a, d] = getTuple();
    cout << a << endl;
    cout << d << endl;


    
    return 0;
}