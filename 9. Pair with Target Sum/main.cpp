#include<iostream>
#include<vector>

// ALternative technique
// #include<unordered_map>

class Problem { 
public:
    std::vector<int> solve(std::vector<int>& input, int targetSum) {
        
        // Two pointer technique
        int left = 0;
        int right = input.size() -1;

        while (left != right){
            int sum = input[left] + input[right];

            if (sum < targetSum)
                left++;
            else if (sum > targetSum) 
                right--;
            else
                return std::vector<int> {left, right};
        }

        return std::vector<int> {-1, -1};


        // // Alternative technique
        // std::unordered_map<int, int> store;

        // for (int i=0; i!=input.size(); i++) {

        //     int complement = targetSum - input[i];

        //     if (store.find(complement) != store.end()){
        //         return std::vector<int> {i, store[complement]};
        //     } else {
        //         store.insert({input[i], i});
        //     }        

        // }

        // return std::vector<int> {-1,-1};
    }
    
};

int main() {
    Problem PairWithTargetSum;

    std::vector input1 {1, 2, 3, 4, 6};
    int targetSum1 {6};
    std::vector output1 = PairWithTargetSum.solve(input1, targetSum1);
    std::cout << "[" << output1[0] << "," << output1[1] << "]" << std::endl;

    std::vector input2 {2, 5, 9, 11};
    int targetSum2 {11};
    std::vector output2 = PairWithTargetSum.solve(input2, targetSum2);
    std::cout << "[" << output2[0] << "," << output2[1] << "]" << std::endl;

    std::vector input3 {1, 3, 5, 7, 9};
    int targetSum3 {16};
    std::vector output3 = PairWithTargetSum.solve(input3, targetSum3);
    std::cout << "[" << output3[0] << "," << output3[1] << "]" << std::endl;
    
}