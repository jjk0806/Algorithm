#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food)
{
    string left = "";
    string right = "";
    
    for (int i = 1; i < food.size(); ++i)
    {
        int count = food[i] / 2;
        left += string(count, '0' + i);
    }
    
    right = left;
    reverse(right.begin(), right.end());
    
    return left + "0" + right;
}