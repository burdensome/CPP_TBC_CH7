#include <iostream>

using namespace std;

// ������ x�� foo��� �Լ��� �Ķ�����̰� ������ y�� foo��� �Լ��� �Ķ����
int foo(int x, int y);

// �Լ� ������ �Ű�������� ��Ī�Ѵ�.
// �Ű�����x, �Ű�����y
// ���������� ���� ���� �� int x, int y�� ������ �ǰ� �ʱ�ȭ���Ǿ� ����� ���� ���� �ȴ�.
int foo(int x, int y)
{
    //int x, int y; �̷��� �Լ� �ȿ� ���� �ִ� �� ó�� �ȴ�.
    return x + y;
}   // x and y are destroyed here


int main()
{
    int x = 1, y = 2;

    // �Լ��� ���� �̷� ���� argument ��, ���� ��� �θ���
    foo(6, 7);  //6, 7: arguments (actual parameters)
    foo(x, y + 1);

    return 0;
}