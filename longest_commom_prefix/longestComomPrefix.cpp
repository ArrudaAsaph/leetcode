#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // compara letra por letra e ordena por ordem alfabética
        sort(strs.begin(), strs.end());
        string first = strs.front();
        string last = strs.back();
        // como ele vai comparando letra por letra e ordena depois o periemiro e o ultimo são os mais diferentes, ent é melhor comparar entre eles

        string prefix = "";
        for (int i = 0; i < first.size() && i < last.size(); i++) {
            if (first[i] == last[i])
                prefix += first[i];
            else
                break;
        }
        return prefix;
    }
};

int main()
{
    Solution solution;
    vector<string> strs1 = {"flower", "flow", "flight"};
    vector<string> strs2 = {"dog", "racecar", "car"};

    cout << solution.longestCommonPrefix(strs1) << endl;
    cout << solution.longestCommonPrefix(strs2) << endl;
}
