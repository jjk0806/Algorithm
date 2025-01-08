#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    int index = 0;
    
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ' ')
        {
            index = 0;
            continue;
        }          
        else       
            s[i] = index % 2 == 0 ? toupper(s[i]) : tolower(s[i]);       
        
        ++index;
    }
    
    return s;
}