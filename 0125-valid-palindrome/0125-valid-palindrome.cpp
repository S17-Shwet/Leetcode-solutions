class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.length()-1;
      while(left<right)
      {  //skip left characters that are not alphanumeric
        while( left<right && !isalnum(s[left]) )
        {
            left++;
        }
        while(left<right && !isalnum(s[right]))
        {
            right--;
        }
     

        //compare left and right characters

        if(tolower(s[left]) != tolower(s[right]) )
{
    return false;
}
left++;
right--;


      }
      return true;
    }
};