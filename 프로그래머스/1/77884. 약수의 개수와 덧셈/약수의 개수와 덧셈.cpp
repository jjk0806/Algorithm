#include <string>
#include <vector>

using namespace std;

int getDivisorCount(const int& num)
{
    int count = 0;
    
    for (int i = 1; i <= num / 2; ++i)
    {
        if (num % i == 0)       
            ++count;        
    }
    
    return count + 1;
}



int solution(int left, int right)
{
    int answer = 0;
    
    for (int i = left; i <= right; ++i)
    {
        if (getDivisorCount(i) % 2 == 0)
            answer += i;
        
        else
            answer -= i;
    }
    
    return answer;
}