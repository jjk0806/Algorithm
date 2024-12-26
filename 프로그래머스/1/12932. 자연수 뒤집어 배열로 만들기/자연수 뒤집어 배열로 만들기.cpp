#include <string>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(long long n)
{
    string temp = to_string(n);
    vector<int> answer;
    answer.reserve(temp.length());       
    
    for (int i = temp.length(); i > 0; i--)
    {
        answer.push_back(temp[i - 1] - '0');
    }
        
    return answer;
}