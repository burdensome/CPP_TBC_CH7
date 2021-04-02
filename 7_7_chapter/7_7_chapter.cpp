#include <iostream>
#include <String>
using namespace std;

// return 타입이 다른 것만 가지고는 함수오버로딩이 되지 않습니다!!
// 매개변수가 다른 것으로 함수 오버로딩이 된다.
int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}


void getRandomValue(int &x){}
void getRandomValue(double &x) {}

// typedef를해도 같은 함수로본다. 컴파일러한테 눈속임을 할 수 없다.
//typedef int my_int;
//void print(int x) {}
//void print(my_int x) {}

// 
/*void print(char *value){}
void print(int value){}
void print(const char* value) {}*/

void print(unsigned int value) {}
void print(float value) {}


int main()
{
    // 이 때 add가 두 종류가 있는데 어떤 add를 사용해야할지는 compile할 떄 결정이 되야한다.
    // 중요한 요소입니다! 
    add(1, 2);
    add(3.0, 4.0);


    // 이렇게하면 return 값이 없다보니 이게 입력을 받는함수인지 뭔지 알기 힘듦
    int x;
    getRandomValue(x);

    //int x = getRandomValue(x);
    //int x = getRandomValue(int());

    //print(0);
  /*  print('a');
    print("a");*/

    print((unsigned int)'a');
    print(0u);
    print(3.141592f);

    return 0;
}