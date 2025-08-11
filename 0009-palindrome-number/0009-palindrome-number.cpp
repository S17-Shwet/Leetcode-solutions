// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x<0 || (x % 10 == 0 && x!= 0))
//         return false;

//         int reversedHalf=0;
//         while(x>reversedHalf)
//         {
//             reversedHalf = reversedHalf*10+x%10;
//             x=x/10;
//         }

//         //for even digits : x==reversedHalf
//         //for odd digits : x==reversed/ 10 (middle digit doesn't matter) 
//         return x == reversedHalf || x == reversedHalf/10;
//     }
// };


class Solution
{
    public:

    bool isPalindrome(int x)
    {

        long long  revNum=0;
        int dup=x;

        while(x>0)
        {
            int ld= x % 10;

            revNum = (revNum * 10) + ld;

            x=x/10;
        }

        if(revNum==dup)
        return true;
        else
        return false;
    }
};