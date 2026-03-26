#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        
        vector<int> lps = buildLPS(needle);
        int i = 0, j = 0;
        int n = haystack.size(), m = needle.size();
        
        while (i < n) {
            if (haystack[i] == needle[j]) {
                i++;
                j++;
            }
            if (j == m) {
                return i - j; // found match
            } else if (i < n && haystack[i] != needle[j]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        return -1; // not found
    }

private:
    vector<int> buildLPS(string pattern) {
        int m = pattern.size();
        vector<int> lps(m, 0);
        int len = 0; // length of previous longest prefix suffix
        int i = 1;
        
        while (i < m) {
            if (pattern[i] == pattern[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }
};

int main() {
    Solution s;
    cout << s.strStr("hello", "ll") << endl;
    cout << s.strStr("aaaaa", "bba") << endl;
}