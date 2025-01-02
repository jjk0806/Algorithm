#include <string>
#include <vector>

using namespace std;

bool solution(string s)
{
    for (auto& ch : s)
    {
        if (static_cast<int>(ch) > 57)
            return false;
    }
    
    if (!(s.length() == 4 || s.length() == 6))
        return false;
    
    return true;
}