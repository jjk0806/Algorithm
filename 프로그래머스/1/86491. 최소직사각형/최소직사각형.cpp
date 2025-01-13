#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes)
{
    int max_w = 0;
    int max_h = 0;
    
    for (int i = 0; i < sizes.size(); ++i)    
        sort(sizes[i].begin(), sizes[i].end());
    
    for (auto& vec : sizes)    
    {
        max_w = max_w < vec[0] ? vec[0] : max_w;
        max_h = max_h < vec[1] ? vec[1] : max_h;
    }    
    
    return max_w * max_h;
}