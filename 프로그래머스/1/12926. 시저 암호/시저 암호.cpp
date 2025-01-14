#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)
{
    // 공백 건너뛰기 v
    // n만큼 연산
    // z가 초과했을 때 a로 다시 돌아와서 계산
    // Z가 초과했을 때 A로 다시 돌아와서 계산
    
    for (auto& ch : s)
    {
        if (ch == ' ')
            continue;
        int cal = static_cast<int>(ch) + n;
        
        if (cal > 122)
            ch = 96 + (cal - 122);
        else if (ch < 91 && cal > 90)
            ch = 64 + (cal - 90);
        else 
            ch = cal;
    }
    
    return s;
}