class Solution {
public:
    bool isUgly(int n) {
       if(n<=0) return false;

       int factors[3]={2,3,5};

       for(int x: factors)
       {
        while(n%x==0)
        {
            n=n/x;        }
       }
       return n==1;
    }
};