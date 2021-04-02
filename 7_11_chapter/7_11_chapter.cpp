#include <iostream>
#include <vector>
using namespace std;

void printStack(const std::vector<int>& stack)
{
    for (auto & e : stack)
        cout << e << " ";
    cout << endl;
}

int main()
{
    // �Ʒ��� ���� �����Ѵٸ� ���������δ�
    // int *v_ptr = new int[3] {1,2,3};
    // �� �̷��� �۵��ϴ°� �ƴ����� �ƹ�ư ���� ���� ����ϰ� �Ǿ��ִ�.
    //std::vector<int> v{ 1,2,3 };

    //// stackó�� vector�� ����ϴ� ���
    //std::vector<int> stack;

    //// resize�� �� �޸𸮸� �ݳ��ϰ� �ٽ� ���Ҵ��ϸ� �ð��� �ɸ��ϱ�
    //// �׳� ������ ����ϴ� �޸� ũ�⸦ ����ϸ鼭 �׳� 2�� �� 'ô' �Ѵ�.
    ////v.resize(2);

    //// capacity�� �ѹ� ��ƺ���
    //v.reserve(1024);

    //// vector�¿� size, capacity ���� �־�� capacity�� �뷮�� ���ؿ�. �ٵ� �� ���� �����޶�?
    //// heap���� ���� ��� ������ ��ƿ����� �����ɷ���. �� ���Ͱ� �ϴ°Ŵ� ��û ������
    //// ������ ū ���α׷��� ���� �� ������ ��ĥ �� �ִ� �����Դϴ�.
    //// new�ϰ� delete�ϴ°� ���� �����ϴ�. ���� �Ⱦ��ô� ���� �����ϴ�/
    //// vector�� ���������� new/delete�� �ϴµ� ���ο��� new/delete�� ��� ���� �ҷ����� ���� ����
    //// �ӵ��� ������ �� �� ������. �׷��� capacity�� ���ĸ� �����δ� capacity ��ŭ�� �޸𸮸� ������ �־��
    //// size�� �� �߿��� �� ���� �޸𸮸� ����Ѵٴ� �ǹ��Դϴ�.

    ///*for (auto& e : v)
    //    cout << e << " ";
    //cout << endl;*/

    //for (unsigned int i = 0; i < v.size(); ++i)
    //    cout << v[i] << " ";
    //cout << endl;
    // 
    //cout << v.size() << " " << v.capacity() << endl;

    ////cout << v.at(2) << endl;

    //int* ptr = v.data();

    //cout << ptr[2] << endl;

    std::vector<int> stack;

    // �� �Ʒ��� ���� pushback�� �ϳ�?
    // reserver�� �̿��ؼ� capacity�� �ø� �ʿ䰡 ���� ����
    // new/delete�� ������� �ʾ� �ӵ��� �����ϴ�.
    // ��, reserver�� �ʹ� ũ�� ������ �޸� ���� �ǹ�������?

    stack.push_back(3);
    printStack(stack);
    stack.push_back(5);
    printStack(stack);
    stack.push_back(7);
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);
    stack.pop_back();
    printStack(stack);

    return 0;
}