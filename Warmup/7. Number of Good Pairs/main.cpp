#include<iostream>
#include<vector>
#include<map>

class Problem {
    public:
    
    // int solve(std::vector<int>& input) {
    //     int count = 0;
    //     for (int i=0; i!=input.size()-1; i++) {
    //         for (int j=input.size()-1; j!=i; j--){
    //             if (input[i] == input[j]){
    //                 count++;
    //             }
    //         }
    //     }
    //     return count;
    // }

    int solve(std::vector<int>& input){

        std::map<int, int> map;
        int count = 0;

        // for (int i=0; i!=input.size(); i++) {
        //     ++map[input[i]];
        //     count += map[input[i]] -1;
        // }

        for (auto n: input) {
            map[n]++;
            count += map[n] -1;
        }

        return count;
    }
    
};

int main() {

    Problem NumberOfGoodPairs;

    std::vector<int> input1 {1,2,3,1,1,3}; 
    int solution1 = NumberOfGoodPairs.solve(input1);
    std::cout << "Output: " << solution1 << std::endl;

    std::vector<int> input2 {1,1,1,1}; 
    int solution2 = NumberOfGoodPairs.solve(input2);
    std::cout << "Output: " << solution2 << std::endl;

    std::vector<int> input3 {1,2,3}; 
    int solution3 = NumberOfGoodPairs.solve(input3);
    std::cout << "Output: " << solution3 << std::endl;

}