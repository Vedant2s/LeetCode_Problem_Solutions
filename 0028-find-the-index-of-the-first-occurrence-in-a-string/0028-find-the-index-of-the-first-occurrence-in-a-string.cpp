class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length();
        int n = needle.length();

        if (n == 0) {  // Handle empty needle case
            return 0;
        }

        for (int i = 0; i <= m - n; i++) {  // Adjust loop condition for potential match
            int j = 0;
            while (j < n && haystack[i + j] == needle[j]) {  // Start matching from current index
                j++;
            }
            if (j == n) {  // Full match found
                return i;
            }
        }
        return -1;  // No match found
    }
};