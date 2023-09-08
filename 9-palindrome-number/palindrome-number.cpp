class Solution {
public:
    bool isPalindrome(int n) {
    long long rev =0;
    int temp =n;
    while(temp>0){
        int lastd = temp%10;
        rev= (rev*10) + lastd;

        temp=temp/10;
    }
    return (rev==n);
        
    }
};