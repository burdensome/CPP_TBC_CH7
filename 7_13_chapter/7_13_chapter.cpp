#include <iostream>
#include <string>

using namespace std;

int main()
{
    // syntax error
    //int x

    //// semantic errors ���ƿ���
    //int x;
    //cin >> x;

    //// ������ 5���� ũ���ε� ���� if���� 5���� ũ�ų� ���ٷ� �Ǿ����� �׷� ������ ������� �ϴµ�
    //// ���� �߻��Ѵ�. ���α׷��Ӱ� �ƴϸ� ã�Ⱑ �����ʴ�. ����Ÿ� ����ϰ� �׷��� ��ƾ��Ѵ�.
    //if (x >= 5)
    //    cout << "x is greater than 5" << endl;

    // ����� ���α׷����� �ϴ� �Ϳ� ���� ������ ��ƾ��Ѵ�. 
    // violated assumption
    string hello = "Hello, my name is jack jack";

    cout << "Input from 0 to " << hello.size() - 1 << endl;

    while (true)
    {
        int ix;
        cin >> ix;
        if (ix >= 0 && ix <= hello.size() - 1)
        {
            cout << hello[ix] << endl;
            break;
        }
        else
            cout << "Please try again" << endl;
    }

    return 0;
}