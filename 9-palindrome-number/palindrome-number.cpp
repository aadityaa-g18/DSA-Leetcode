class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        int ans=0;
        int temp=x;
        while(temp!=0){
            int rem=temp%10;
            if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
                return false;
            }
            ans=(ans*10)+rem;
            temp=temp/10;
        }
        if(ans==x){
            return true;
        }else{
            return false;
        }
    }
};