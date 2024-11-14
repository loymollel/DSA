#include<iostream>
#include<vector>
#include<algorithm>

class Problem {
public:
    int solve(std::vector<int>& input) {

        int count = 1;
        int j = 1;

        for (int i=1; i!=input.size(); i++) {
            if (input[i] != input[j-1]) {
                std::swap(input[i], input[j]);
                count++;
                j++;
            }          
        }

        return count;
    }
};

int main() {

    Problem NonDuplicateNumbers;
    std::vector<int> input {2, 3, 3, 3, 6, 9, 9};
    std::cout << NonDuplicateNumbers.solve(input) << std::endl;

    std::vector<int> input2 {2, 2, 2, 11};
    std::cout << NonDuplicateNumbers.solve(input2) << std::endl;

    std::vector<int> input3 {1, 1, 2, 2, 3, 3, 4, 4};
    std::cout << NonDuplicateNumbers.solve(input3) << std::endl;
}