#include<iostream>
#include<string>
#include<vector>
#include <string>
#include<algorithm>
using namespace std;

#include <vector>
#include <string>
using namespace std;
std::string twoSort(std::vector<std::string> s)
{
    std::sort(s.begin(), s.end());
    string first = s[0];

    string result = "";

    for (int i = 0; i < first.size(); i++)
    {
        result.push_back(first[i]);
         (i< first.size() -1? result += "***" : result);
    }
    return result;
}


int main()
{
    cout << twoSort(std::vector<std::string>{ "turns", "out", "random", "test", "cases", "are", "easier", "than", "writing", "out", "basic", "ones" });

    return 0;

}