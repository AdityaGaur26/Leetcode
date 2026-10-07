class Solution {
public:
    bool isPalindrome(int x) {
        long temp = x;
        long long rev = 0;
        while(temp > 0){
            int lastdigit = temp % 10;
            rev = (rev*10) + lastdigit;
            temp /= 10;
        }
        if(rev == x){
            return true;
        }else{
            return false;
        }
    }
};