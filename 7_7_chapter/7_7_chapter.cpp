#include <iostream>
#include <String>
using namespace std;

// return Ÿ���� �ٸ� �͸� ������� �Լ������ε��� ���� �ʽ��ϴ�!!
// �Ű������� �ٸ� ������ �Լ� �����ε��� �ȴ�.
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

// typedef���ص� ���� �Լ��κ���. �����Ϸ����� �������� �� �� ����.
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
    // �� �� add�� �� ������ �ִµ� � add�� ����ؾ������� compile�� �� ������ �Ǿ��Ѵ�.
    // �߿��� ����Դϴ�! 
    add(1, 2);
    add(3.0, 4.0);


    // �̷����ϸ� return ���� ���ٺ��� �̰� �Է��� �޴��Լ����� ���� �˱� ����
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