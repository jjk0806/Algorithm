#include <string>
#include <vector>

using namespace std;

string solution(string s)
{ 
    int temp = s.length() / 2;
    
    if (s.length() % 2 == 0)
        return s.substr(temp - 1, 2);
    else
        return s.substr(temp, 1);
}