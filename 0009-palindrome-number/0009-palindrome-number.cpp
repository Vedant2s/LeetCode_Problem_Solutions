class Solution {
public:
    bool isPalindrome(int x) {
        string a =to_string(x);
        string ar="";
        for(int i=0;i<a.length();i++){
            // ar[i]=a[a.length()-1-i]; Error
            ar.push_back(a[a.length() - 1 - i]);
        }
     
        if(ar==a)
            return true;
        return false;
            
    }
};