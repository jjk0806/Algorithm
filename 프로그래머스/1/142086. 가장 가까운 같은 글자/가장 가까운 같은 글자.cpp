#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;
    
    for (int i = 0; i < s.size(); ++i)
    {
        int temp = 0;
        
        for (int j = i - 1; j >= 0; --j)
        {
            if (s[j] == s[i])
            {
                temp = i - j;
                break;
            }
        }
        
        if (temp == 0)
            answer.push_back(-1);
        else        
            answer.push_back(temp);   
    }
    
    return answer;
}