// �Լ��� �Ű������� �μ��� �����ϴ� �������� ��� �߿��� ���� �����ϱ� ���� ����
// ���� ���� �μ������� ���� �˾ƺ��ڽ��ϴ�. �Լ��� ȣ���ϴ� ���忡�� �������� �������� ȣ��
// call by value�� �ǰ���. 
#include <iostream>

using namespace std;

// ���� ���� ������ �ܺο� ������ ��ġ�� �ʴ´�.
void doSomething(int y)
{
    cout << "In func " << y << " " << &y << endl;
}

int main()
{
    // literal �� �ϳ��� int y�� ���簡 �Ǵ°���
    doSomething(5);

    int x = 6;

    cout << "In main " << x << " " << &x << endl;

    // x�� �־��ְ�����? x������ �־��ִ°� �ƴϰ� x�� �ִ� 6�� ���� ���޵Ǵ� ���̴�.
    // 6�̶�� ���� argument�ν� ���޵Ǵ� ���̴�.
    doSomething(x);
    doSomething(x + 1);

    return 0;
}