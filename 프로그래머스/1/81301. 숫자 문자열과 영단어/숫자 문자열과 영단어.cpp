#include <string>
#include <unordered_map>

using namespace std;

int solution(string s)
{
	string result = "";
	string temp = "";
	unordered_map<string, string> strNumber
	{
		{ "zero", "0" }, {"one", "1" }, {"two", "2" }, {"three", "3" },
		{ "four", "4" }, { "five", "5" }, { "six", "6" }, { "seven", "7" },
		{ "eight", "8" }, { "nine", "9" }
	};

	for (auto& ch : s)
	{
		if (isdigit(ch))
			result += ch;
		else
		{
			temp += ch;
			if (strNumber.find(temp) != strNumber.end())
			{
				result += strNumber[temp];
				temp = "";
			}
		}
	}

	return stoi(result);
}
