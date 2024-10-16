class Solution {
public:
    
   int addDigits(int num) {
    int sum = 0;
    if (num < 10) {
        return num;
    }
    else {
        vector<int>v = { 0,1,2,3,4,5,6,7,8,9 };
        auto it = std::find(v.begin(), v.end(), num);
        while (it == v.end()) {
            sum = 0;
            while (num > 0) {
                sum += num % 10;
                num = num / 10;
            }
            it = std::find(v.begin(), v.end(), sum);
            if (it != v.end()) {
                return sum;
            }
            num = sum;


        }
    }
    return sum;
}
};