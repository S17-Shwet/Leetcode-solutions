class Solution {
public:
    int reverse(int x) {
        long long reversed=0;
      while(x!=0)
      {
        int ld=x%10;//get the last digit
        reversed=reversed*10+ld;//append digit
         x=x/10;//remove last digit
      }
      if(reversed < INT_MIN || reversed > INT_MAX) return 0;
      return (int) reversed;
    }
};
// x = 123, reversed = 0

// ld = 123 % 10 = 3
// reversed = 0 * 10 + 3 = 3
// x = 123 / 10 = 12

// ld = 12 % 10 = 2
// reversed = 3 * 10 + 2 = 32
// x = 12 / 10 = 1

// ld = 1 % 10 = 1
// reversed = 32 * 10 + 1 = 321
// x = 1 / 10 = 0