class Solution {
public:
    bool isPalindrome(string& str) {
        int i = 0;
        int j = str.size() - 1;

        while (i < j) {
            if (str[i] != str[j])
                return false;
            i++;
            j--;
        }

        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        string result = "";

        for (int i = 0; i < n; i++) {
            string str = "";
            for (int j = i; j < n; j++) {
                str += s[j];
                if (isPalindrome(str) && str.size() > result.size())
                    result = str;
            }
        }

        return result;
    }
};
