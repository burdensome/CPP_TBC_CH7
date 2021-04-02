// 매개변수가 여러개 있을 때 매번 여러개의 매개변수에 모든 값을 넣어주는 것이 번거로울 수 있죠
// 여기서는 매개변수의 기본값을 설정해서 원하는 경우에는 argument를 설정하는 것을 생략하는 방법에 대해서 설명하겠습니다.
#include <iostream>
#include <string>
using namespace std;


// default parameter를 헤더파일에 있는 declaration을 먼저 보게되어있기 때문에
// 여기에 초기화 하는게 낫다.
//void print(int x = 10, int y = 20, int z = 30); // in header
//
//void print(int x, int y, int z)   // default parameter
//{
//    cout << x << " " << y << " " << z << endl;
//}

void print(int x){} // ambiguous
void print(int x, int y = 10){}

int main()
{/*
    print();
    print(100);
    print(100, 200);
    print(100, 200, 300);*/

    print(10);

    return 0;
}