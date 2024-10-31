#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
    public:
        bool contains_duplicates(vector<int>& input) {
            
            unordered_set<int> set;

            for (auto x : input) {

                if (set.count(x))
                    return true; 
                else {
                    set.insert(x);
                }
            }
            return false;
        }
};


int main() {

    Solution solution;
    vector<int> nums = {1, 2 , 5 , 6};
    bool result = solution.contains_duplicates(nums);
    
    cout << (result ? "true" : "false") << endl;

    return 0;
}