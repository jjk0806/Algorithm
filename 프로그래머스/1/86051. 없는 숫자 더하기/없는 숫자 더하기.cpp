#include <string>
#include <vector>

using namespace std;

int Check(vector<int> numbers, const int& num)
{
    bool check = false;

    for (int i = 0; i < 10; i++)
    {
        if (num == numbers[i])
            check = true;       
    }
    
    return check ? 0 : num;
}


int solution(vector<int> numbers)
{
	int answer = 0;
    
    for (int i = 0; i < 10; i++)
    {
        answer += Check(numbers, i);
    }
    
    return answer;
}