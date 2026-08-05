class Solution {
public:
    bool isPalindrome(string s) {
 int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            // Skip non-alphanumeric characters from left
            while (i < j && !std::isalnum(s[i])) {
                i++;
            }
            // Skip non-alphanumeric characters from right
            while (i < j && !std::isalnum(s[j])) {
                j--;
            }

            // Compare lowercased characters
            if (std::tolower(s[i]) != std::tolower(s[j])) {
                return false;
            }

            i++;
            j--;
        }

        return true;
        
    }
};
