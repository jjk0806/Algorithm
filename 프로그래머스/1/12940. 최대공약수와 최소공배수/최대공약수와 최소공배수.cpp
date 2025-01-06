#include <string>
#include <vector>

using namespace std;

int maxDivisor(int n, int m)
{
    int temp = 0;
    
    for (int i = 1; i <= m; ++i)
    {
        if (m % i == 0 && n % i == 0)
            temp = i;        
    }
    
    return temp;
}


vector<int> solution(int n, int m)
{
    vector<int> answer;
    
    int max_divisor = maxDivisor(n, m);
    answer.push_back(max_divisor);
    
    int min_multiple = (m * n) / max_divisor;
    answer.push_back(min_multiple);
    
    return answer;
}