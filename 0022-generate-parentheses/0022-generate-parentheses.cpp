class Solution {
public:
bool isValid(string s)
{
    int count=0;
    for(char c : s)
    {
        if(c == '(')
        count++;
        else
        count--;
        if(count < 0) return false;//invalid
    }

    return count == 0;
}
void generateAll(string curr,int n ,vector<string> &result)
{
    if(curr.length() == 2*n )
    {
        if(isValid(curr))
        
            result.push_back(curr);
            return;
    }
        generateAll(curr + "(" ,n,result);
        generateAll(curr + ")",n,result);
 }


    vector<string> generateParenthesis(int n) {
        vector<string>result;
        generateAll("",n,result);
        return result;
        
    }
};