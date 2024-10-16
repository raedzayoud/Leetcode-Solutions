class Solution {
public:
    long long getsum(int n) {
        long long sum = 0;
        while (n > 0) {
            sum += pow(n % 10, 2);
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {

        set<int> st;
        long long p = 0;
        while (true) {
            p = getsum(n);
            if (p == 1) {
                return true;
            } else if (st.contains(p)) {
                return false;
            }
            st.insert(p);
            n=p;
        }
        return true;
    }
};