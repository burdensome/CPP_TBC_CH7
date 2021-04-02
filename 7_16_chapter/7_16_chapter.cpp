#include <iostream>
#include <cstdarg> // for ellipsis

using namespace std;

// count argument만큼의 argument를 평균해주는 걸 하고 있다. 사용이 어렵고 위험해서 초보자한테 사용을 권하지 않는다.
// 홍교수님 조차도 정말 다른방법으로 하기 힘들 때만 쓴다.
double findAverage(int count, ...)
{
    double sum = 0;

    va_list list;

    // 위에 ...에 대한 argument 갯수 count
    va_start(list, count);

    for (int arg = 0; arg < count; ++arg)
        sum += va_arg(list, int);

    va_end(list);

    return sum / count;
}

int main()
{
    cout << findAverage(1, 1, 2, 3, "hELLO", 'C') << endl;
    cout << findAverage(3, 1, 2, 3) << endl;
    cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
    cout << findAverage(10, 1, 2, 3, 4, 5) << endl;

    return 0;
}