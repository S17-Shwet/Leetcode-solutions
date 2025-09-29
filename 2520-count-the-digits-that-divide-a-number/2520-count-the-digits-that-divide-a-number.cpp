class Solution {
public:
    int countDigits(int num) {
        // vector<int> dig;

long long originalnum=num;
int count=0;
while(num>0)
{
    int lastdig=num%10;

    if(lastdig!=0 && originalnum%lastdig==0)
    {
        count++;
    }

    num=num/10;
}
return count;
    }
};