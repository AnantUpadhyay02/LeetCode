class Solution {
public:
    int reverse(int n) {
    long long revN = 0;
    // int temp =n;
    while(n!=0){
        int rem = n%10;
        revN= (revN*10)+rem;
        n = n/10;
    }
    if(revN>INT_MAX || revN<INT_MIN) return 0;
    
    return revN;
    }
    
};