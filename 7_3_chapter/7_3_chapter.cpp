// 참조에 의한 인수 전달
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

//void addOne(int& y)
//{
//    cout << y << " " << &y << endl;
//
//    y = y + 1;
//}

// double degrees -> 복사로 되는거니 입력이구나 // double& sin_out, double& cos_out -> 밖의 값에 영향을 미치겠구나
// 즉 c/c++에서는 return 값이 하나밖에 안되니까(요즘은 여러개 가능하지만.. 암튼) 아래와 같이 출력을 여러개 할 수 있따.
// 많이 하는 방식이다. 그래서 매개변수를 많이 쓰는 경우가 있다.
// 보통 입력을 앞에두고, 출력은 레퍼런스로 뒤에 두는것이 일반적이다.
// 그리고 입력이고 출력이다를 확실히 설명해 주려면 입력 앞에 const를 넣어놔라. 그리고 사실 여기다가도
// reference로 만들어버리는게 훨씬 더 좋겠다.
void getSinCos(const double &degrees, double& sin_out, double& cos_out)
{
    //static const double pi = 3.141592;    (1) 
    static const double pi = 3.141592 / 180.0;  // (2) static 변수인 pi에서 180을 나누는걸 넣으면 한번만 계산하니 효율이 좋아진다

    // 한번 계산되고 더이상 계산이 안되는 것은 무조건 const로 박아버린다. 그래야 실수가 적다.
    //const double radians = degrees * pi / 180.0;  // (1) 이렇게 하면 매번 180을 나눠줘야하는데
    const double radians = degrees * pi;    // (2) 이렇게 하면 위에서 180나눈걸 계산해주니 효율이 좋아진다.
    sin_out = std::sin(radians);
    cos_out = std::cos(radians);
}

void foo(const int& x)
{
    cout << x << endl;
}

// 포인터에 대한 reference를 보낼 수도 있어요.
// 포인터 변수를 reference로 받으려면 어떻게 해야하나?
// 근데 아래 함수를 어떻게 해석해야하냐? void foo((int *) &ptr) == void foo(int *&ptr) 라고 생각하면 편하다.
// 이렇게 작동은 안하지만...
// 조금 더 명확하게 이해하면
typedef int* pint;  // 이렇게 사용하면 이해하기가 편하다.
void foo(int *&ptr)
//void foo(pint & ptr)
{
    cout << ptr << " " << &ptr << " " << *ptr <<  endl;
}


// array를 파라미터 전달방법
void printElement(int (&arr)[4])
{

}

void printElement(vector<int> &arr)
{
    arr[0] = 100;
}

int main()
{
    /*int x = 5;
    cout << x << " " << &x << endl;

    addOne(x);

    cout << x << " " << &x << endl;*/


    double sin(0.0);
    double cos(0.0);

    getSinCos(30.0, sin, cos);

    foo(6);

    // 포인터를 레퍼런스 파라미터로 전달받는 방법
    int x = 5;
    int* ptr = &x;

    cout << ptr << " " << &ptr << endl;
    foo(ptr);

    // array를 파라미터에 전달하는 방법
    // 홍교수님은 이렇게 정적배열로 작성해 본적이 한번도!!!없다.
    // 무조건 동적배열을 사용한다고 한다.
    int arr[]{ 1,2,3,4 };   

    printElement(arr);

    // 이렇게 vector를 사용 동적배열 사용
    vector<int>arr2 { 1,2,3,4 };
    printElement(arr2);

    cout << arr2[0] << endl;

    return 0;
}