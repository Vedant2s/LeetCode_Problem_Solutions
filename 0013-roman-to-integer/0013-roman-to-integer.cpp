class Solution {
public:
    int i=0;
    int romanToInt(string s) {
        int total=0;
        for(this->i=0;this->i<s.length();this->i++){
            if(i<s.length())
            total+=vals(s[i],s[i+1]);
            else
                total+=vals(s[i],' ');        
        }
        // if(i<s.length())
        // total+=vals(s[i+1],' ');
        return total;
    }
    int vals(char p, char p2){
        switch(p){
            case 'M' :
                return 1000;
                break;
            case 'D' :
                return 500;
                break;
            case 'C' :
                if(p2=='D')
                {
                    i+=1;
                    return 400;}
                else if(p2=='M'){
                i+=1;
                    return 900;}
                return 100;
                break;
            case 'L' :
                return 50;
                break;
            case 'X' :
                if(p2=='L')
                {
                    i+=1;
                    return 40;}
                else if(p2=='C'){
                i+=1;
                    return 90;}
                return 10;
                break;
            case 'V' :
                return 5;
                break;
            case 'I' :
                if(p2=='V')
                {
                    i+=1;
                    return 4;}
                else if(p2=='X'){
                i+=1;
                    return 9;}
                return 1;
                break;
            default :
                return 0;
                break;
        }
        return 0;
    }
};