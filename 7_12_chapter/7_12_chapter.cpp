// ����� �Լ� ȣ��(recursive function call - �ٿ��� recursion)
// �ڱ��ϰ� �̸��� �Ȱ��� �Լ��� �ٽ� ȣ���ϴ� �� �Դϴ�.
// recursion�� �����ϱ�� �� ����. �ٸ� stack�� ����ϱ� ������
// ȣ���ϴ� depth�� �Ѱ谡 �ִ�.
// �׷��� �������̸� iteration�� ����ϴ°� ����.
#include <iostream>

using namespace std;

void countDown(int count)
{
    cout << count << endl;
    // ���� �Լ��� ȣ�� �� �� �ᱹ �Լ��� ���� �ּҸ� ��������
    // ����Լ��� �ٽ� ȣ���� �Ѵٰ� �ϴ��� �ٽ� ������ �ϴ� ���̴�.
    if(count > 0)
        countDown(count - 1);
}

int sumTo(int sumto)
{
    if (sumto <= 0)
        return 0;
    else if (sumto <= 1)
        return 1;
    else
    {
        const int sum_minus_one = sumTo(sumto - 1);
        return sumTo(sumto - 1) + sumto;
    }


}

int main()
{
    //countDown(5);

    cout << sumTo(10) << endl;

    return 0;
}