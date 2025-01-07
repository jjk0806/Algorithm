#include <string>
#include <vector>
#include <cmath>

using namespace std;

string getNumberString(const int& num)
{
    int insert_num = num;
    string result;
    while (insert_num > 0)
    {
        result += to_string(insert_num % 3);
        insert_num /= 3;      
    }
    
    return result;
}

int solution(int n)
{
    int answer = 0;
    string temp = getNumberString(n);
    
    for (int i = temp.size() - 1, j = 0; i >= 0; --i, ++j)
    {
        int insert_num = static_cast<int>(temp[i]) - '0';
        answer += (insert_num * pow(3, j));       
    }
    
    return answer;
}