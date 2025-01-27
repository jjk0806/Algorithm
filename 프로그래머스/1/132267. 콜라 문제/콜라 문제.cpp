#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n)
{
    if (n < a)
        return 0;
    
    int count = n / a * b;
    int remain = n % a;
    n = count + remain;
    return count + solution(a, b, n);
}