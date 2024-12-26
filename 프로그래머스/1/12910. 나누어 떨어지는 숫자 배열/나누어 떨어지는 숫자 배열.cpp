#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor)
{
    vector<int> answer;    
    bool isTrue = false;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % divisor == 0)
        {
            answer.push_back(arr[i]);
            isTrue = true;    
        }                  
    }
    
    if (isTrue)
        sort(answer.begin(), answer.end());
    else
        answer.push_back(-1);
    
    return answer;
}