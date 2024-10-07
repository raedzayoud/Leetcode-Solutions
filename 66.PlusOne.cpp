class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool ans=false;
        for(int i=digits.size()-1 ;i>=0;i--){
             if(digits[i]<9){
                digits[i]++;
                return digits;
            }
             digits[i]=0;
        }
        digits.push_back(1);
        sort(digits.begin(),digits.end(),greater<int>());
        return digits;
    }
};