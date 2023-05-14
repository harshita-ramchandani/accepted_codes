// https://leetcode.com/problems/reverse-integer/


class Solution {
public:
    int reverse(int x) {
        int count=0,length=0;
        int rem;
        double ans=0;
        int p=x;
        while(x!=0){
            x=x/10;
            length++;
        }
        while(length){
            rem=p%10;
            p=p/10;
            ans=ans+rem*pow(10,length);
            length--;
        }
        if((ans/10)<2147483648 && (ans/10)>-2147483648){
            return ans/10;
        }
        else{
            return 0;
        }
    }
};
