class Solution {
public:
    int reverse(int x) {
        long long nb=x%10;
        x=x/10;
        while(x!=0){
            nb=nb*10+(x%10);
            x=x/10;
        }
        return nb;
    }
};