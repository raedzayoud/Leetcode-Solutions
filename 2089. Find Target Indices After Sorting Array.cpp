class Solution {
public:
   vector<int> targetIndices(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    vector<int> v1;
   // set<int> v;
    int i = 0;
    int start = 0;
    int mid1=0;
    int j = nums.size() - 1;

    while (i <= j) {
        int mid = (i + j) / 2;
        if (nums[mid] == target) {
            start = mid;
            for (int k = start; k < nums.size(); k++) {
                if (nums[k] != target) {
                    break;
                }
                else {
                    v1.push_back(k);
                }
            }
            mid--;
            if (mid >= 0) {
                while (target == nums[mid]) {
                    v1.push_back(mid);
                    mid--;
                    if (mid < 0) {
                        break;
                    }



                }
            }
            
            break;
        }
        else if (nums[mid] < target) {
            i = mid + 1;
        }
        else {
            j = mid - 1;
        }
    }

   
  
    sort(v1.begin(), v1.end());
   

    return v1;
}
};


