// return ���� ��� ���� ���ΰ�. �Լ��� ������ ����� ��� �������� ���ΰ��� ���캸�ڽ��ϴ�.
#include <iostream>
#include <array>
#include <tuple>

using namespace std;

// Ʃ���� ����ؼ� ���ϰ��� ������ �޴µ� ��ġ std::tuple<int, double> �� ����� ���� �ڷ����� �ǹ�����.
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

// �̷� ����� ���� ��õ���� �ʴ´ܴ�. ������ ����!
//int* getValue(int x)
//{
//    int value = x * 2;
//    return &value;
//}

// �̷� ������ �����޸𸮸� �Ҵ��ϴ� ����� ���α׷��Ӹ� ����� �� �� �ִ�.
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

// return by reference�� ��ó�� ���� �������Ǵµ� �׷� ���𰡾���? �װ� �� �ƴϴ�.
// �Ʒ��� ���� return ���� ����Ͽ� �迭�� �����ϸ� ��ü ���ϳ�? ��� ������ �Ǳ��ѵ�
// ���� library���� ������ ����̵ȴ�
int& get(std::array<int, 100>& my_array, int ix)
{
    return my_array[ix];
}

//���� �������� ���Ϲް�ʹ�
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

    // �̷��ԵǸ�� getValue�� reference�� ��ȯ�ؼ� reference�� ��� �����ִ� ���¿���
    // �� reference�� ����Ű�� �ִ� ������ ���� ���� �� value�� �����ؼ� ��������
    //int value = getValue(5);

    // ���۷����� ������ getValeu�Լ����� value�� ������ ������� �̷��� �ϸ� �ȵȴ�.    
    int &value = getValue(5);

    // return���� �޾Ƽ� ����� �� ������ ��Ƶΰ� �ִٰ� �� �� ���� ���ߴ��ϰ� os�� �޸𸮸� �����ش�.
    cout << value << endl;
    // ������ os�� �޸𸮸� �����ְ� ���� �Ʒ��� ������ ���� �����Եȴ�.
    cout << value << endl;

    std::array<int, 100> my_array;
    my_array[30] = 10;

    // �̷��� reference ���� �Լ��� ����ع����� ��ġ �迭�� ����ó�� ����� �ǰԵȴ�.
    get(my_array, 30) *= 10;

    cout << my_array[30] << endl;

    // Return ���� ������ ���� �� �ִ�
    // �̷��� �ϸ� ���� ���� �ޱ����ؼ� �Ź� ����ü�� �־���ؼ� ���ϰ� Ŀ���Եȴ�.
    // �������� �� �̷����߾���. dirext X �̷���.. �̰� C-Style �ڵ�
    // ������ c�ϱ� �ӵ��� �� ��������
 /*   S my_s = getStruct();
    my_s.a;*/

    // tuple��� ���� ������
    //std::tuple<int, double> my_tp = getTuple();
    //cout << std::get<0>(my_tp) << endl; // a
    //cout << std::get<1>(my_tp) << endl; // d

    // tuple����ε� ��� �̰� c++17�̻�
    auto[a, d] = getTuple();
    cout << a << endl;
    cout << d << endl;


    
    return 0;
}