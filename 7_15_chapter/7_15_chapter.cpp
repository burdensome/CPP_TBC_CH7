#include <iostream>
#include <string>
using namespace std;

// ����� �μ� command line argument�� �˷��帮�ڽ��ϴ�.
// main���� ���� ����? operating �ý����� ������ ȣ���ҋ��¿� parameter�� 2������ �־��� �� �־��.
// ���� 2������ ���������ε�
// ���� command line���� ������ �� �ʿ䰡 ���� ���� �ֽ��ϴ�. ��ũ��Ʈ ������?
// �ٵ� �ƹ����� �����°� ���ڿ��� array�� �����µ� �ʿ信 ���� string���� �ٲ㼭 �ʿ��� ������ Ÿ������
// �ٲ㼭 ó���� �� �� �ִ�.
// boost library�� ����ϸ� command line�� ���� ���̺� �̳�? ��ư �̰� ã�ƺ���� �Ͻ�.
int main(int argc, char *argv[])
{
    for (int count = 0; count < argc; ++count)
    {
        std::string argv_single = argv[count];

        if (count == 1)
        {
            int input_number = std::stoi(argv_single);
            cout << input_number + 1 << endl;
        }
        else
            cout << argv[count] << endl;
        
    }

    return 0;
}