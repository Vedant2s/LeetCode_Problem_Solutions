class Solution {
public:
    int mySqrt(int x) {
        bool cond=true;
        long int i=0;
        while(cond){
            i++;
            if(i*i>x)
                cond=false;
            
        }
        return i-1;
    }
};