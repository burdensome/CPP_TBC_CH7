#include <iostream>
#include <string>
using namespace std;

// 명령줄 인수 command line argument를 알려드리겠습니다.
// main에는 뭐가 들어갈까? operating 시스템이 메인을 호출할떄는여 parameter를 2가지를 넣어줄 수 있어요.
// 말이 2가지지 여러가지인데
// 종종 command line에서 실행을 할 필요가 있을 때가 있습니다. 스크립트 같은거?
// 근데 아무래도 들어오는게 문자열의 array로 들어오는데 필요에 따라서 string으로 바꿔서 필요한 데이터 타입으로
// 바꿔서 처리를 할 수 있다.
// boost library를 사용하면 command line에 대한 라이블리 이낙? 암튼 이걸 찾아보라고 하심.
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