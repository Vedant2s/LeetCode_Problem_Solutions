class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        /*If the array is sorted alphabetically then you can assume that the first element of the array and the last element of the array will have most different prefixes of all comparisons that could be made between strings in the array. If this is true, you only have to compare these two strings.*/
        sort(strs.begin(),strs.end());
        string ans="";
        int n=strs.size()-1;
        string first=strs[0],last=strs[n];
        for(int i=0; i<min(first.length(),last.length());i++){
            if(first[i]!=last[i])
                return ans;
            ans+=first[i];
        }
        return ans;   
    }
};