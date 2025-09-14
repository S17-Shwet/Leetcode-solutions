class Solution {
public:
    bool isPalindrome(int x) {
        long long reversed=0;
        int dup=x;
   
       if(x<0) return false;
        while(x!=0)
        {
            int ld=x%10;
            reversed=reversed*10 + ld;
            x=x/10;
        }
        return reversed == dup;
        
    }
};