#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int sum = 0;
    
    for (auto& i : arr)
        sum += i;
    
    answer = static_cast<double>(sum) / arr.size();
    
    return answer;
}