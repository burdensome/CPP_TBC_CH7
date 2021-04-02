// ���α׷��� �ð��� ��κ��� ���α׷��� �ð��� �ƴϰ� debugging�� ���� �ð��� �ҿ�˴ϴ�.
// ������� �� ���� �����Ϸ��� ������ ���� �� �ִٸ� ���� �� �� �ְ���
// compile�� ����޾� ������ϴ� assert �� ������ڴ�.
#include <iostream>
#include <cassert>  // assert.h
#include <array>

using namespace std;

void printValue(const std::array<int, 5>& my_array, const int& ix)
{
    // ȫ�������� �� ���� ������ ���ʴϴ�. �̴��� ������ ���� �ΰ� �� ���� �������� �ٷ� �� �� �ֱ� ����!!
    // &&�����ڸ� ����ϴ°� �� ������ �ƴϱ���
    assert(ix >= 0);
    assert(ix <= my_array.size() - 1);

    std::cout << my_array[ix] << std::endl;
}

int main()
{
    const int number = 5;

    std::array<int, 5> my_array{ 1,2,3,4,5 };

    //printValue(my_array, 100);

    const int x = 10;

    assert(x == 5);

    // static assert�� compile time�� �����Ǵ� ��츸 ��� �� �� ����.
    static_assert(x == 5, "x should be 5 (jm)");
    // ... 

    // debug��� �� ���� �۵��Ѵ�. release ����϶��� �۵� ����.
    // ���� number should be 5 ��� �Ѵٸ� �ᱹ ���α׷��Ӱ� ���� �� 5���� �������ϴµ�.
    // �̰� ���ٴ� Ŀ��Ʈ ���� �ʿ� ���� assert�� �ھƹ����� �ȴ�.
    // release��� �� ���� ���α׷��� ���� ���ƾ��ϴ� �̷� ����뿡 ���õȰ� �������� �ʴ´�.
    // �׷��� debug��� �ϋ��� �۵�
    assert(number == 5);

    return 0;
}