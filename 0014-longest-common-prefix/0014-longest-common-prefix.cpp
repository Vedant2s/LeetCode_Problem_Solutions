class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         // Check if the vector is empty
        if (strs.empty()) {
            return "";
        }

        // Iterate through characters of the first string
        for (int i = 0; i < strs[0].size(); ++i) {
            // Compare the character at position i in the first string with the corresponding characters in the other strings
            for (int j = 1; j < strs.size(); ++j) {
                // If the current character doesn't match or we reach the end of any string, return the prefix found so far
                if (i >= strs[j].size() || strs[j][i] != strs[0][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }

        // If we reach here, the entire first string is a common prefix
        return strs[0];
    }
};