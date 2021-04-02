// ������ ���� �μ� ����
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

// double degrees -> ����� �Ǵ°Ŵ� �Է��̱��� // double& sin_out, double& cos_out -> ���� ���� ������ ��ġ�ڱ���
// �� c/c++������ return ���� �ϳ��ۿ� �ȵǴϱ�(������ ������ ����������.. ��ư) �Ʒ��� ���� ����� ������ �� �� �ֵ�.
// ���� �ϴ� ����̴�. �׷��� �Ű������� ���� ���� ��찡 �ִ�.
// ���� �Է��� �տ��ΰ�, ����� ���۷����� �ڿ� �δ°��� �Ϲ����̴�.
// �׸��� �Է��̰� ����̴ٸ� Ȯ���� ������ �ַ��� �Է� �տ� const�� �־����. �׸��� ��� ����ٰ���
// reference�� ���������°� �ξ� �� ���ڴ�.
void getSinCos(const double &degrees, double& sin_out, double& cos_out)
{
    //static const double pi = 3.141592;    (1) 
    static const double pi = 3.141592 / 180.0;  // (2) static ������ pi���� 180�� �����°� ������ �ѹ��� ����ϴ� ȿ���� ��������

    // �ѹ� ���ǰ� ���̻� ����� �ȵǴ� ���� ������ const�� �ھƹ�����. �׷��� �Ǽ��� ����.
    //const double radians = degrees * pi / 180.0;  // (1) �̷��� �ϸ� �Ź� 180�� ��������ϴµ�
    const double radians = degrees * pi;    // (2) �̷��� �ϸ� ������ 180������ ������ִ� ȿ���� ��������.
    sin_out = std::sin(radians);
    cos_out = std::cos(radians);
}

void foo(const int& x)
{
    cout << x << endl;
}

// �����Ϳ� ���� reference�� ���� ���� �־��.
// ������ ������ reference�� �������� ��� �ؾ��ϳ�?
// �ٵ� �Ʒ� �Լ��� ��� �ؼ��ؾ��ϳ�? void foo((int *) &ptr) == void foo(int *&ptr) ��� �����ϸ� ���ϴ�.
// �̷��� �۵��� ��������...
// ���� �� ��Ȯ�ϰ� �����ϸ�
typedef int* pint;  // �̷��� ����ϸ� �����ϱⰡ ���ϴ�.
void foo(int *&ptr)
//void foo(pint & ptr)
{
    cout << ptr << " " << &ptr << " " << *ptr <<  endl;
}


// array�� �Ķ���� ���޹��
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

    // �����͸� ���۷��� �Ķ���ͷ� ���޹޴� ���
    int x = 5;
    int* ptr = &x;

    cout << ptr << " " << &ptr << endl;
    foo(ptr);

    // array�� �Ķ���Ϳ� �����ϴ� ���
    // ȫ�������� �̷��� �����迭�� �ۼ��� ������ �ѹ���!!!����.
    // ������ �����迭�� ����Ѵٰ� �Ѵ�.
    int arr[]{ 1,2,3,4 };   

    printElement(arr);

    // �̷��� vector�� ��� �����迭 ���
    vector<int>arr2 { 1,2,3,4 };
    printElement(arr2);

    cout << arr2[0] << endl;

    return 0;
}