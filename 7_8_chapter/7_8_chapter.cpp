// �Ű������� ������ ���� �� �Ź� �������� �Ű������� ��� ���� �־��ִ� ���� ���ŷο� �� ����
// ���⼭�� �Ű������� �⺻���� �����ؼ� ���ϴ� ��쿡�� argument�� �����ϴ� ���� �����ϴ� ����� ���ؼ� �����ϰڽ��ϴ�.
#include <iostream>
#include <string>
using namespace std;


// default parameter�� ������Ͽ� �ִ� declaration�� ���� ���ԵǾ��ֱ� ������
// ���⿡ �ʱ�ȭ �ϴ°� ����.
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