#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul)
{
    string str_num = "";
    
    for (int i = 0; i < seoul.size(); i++)
    {
        if (seoul[i] == "Kim")
        {
            str_num.append(to_string(i));
            break;
        }
    }
    
    return "김서방은 " + str_num + "에 있다";
}