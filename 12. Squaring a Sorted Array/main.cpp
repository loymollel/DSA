#include<iostream>
#include<vector>
#include<cmath>

class Problem {
    public:
        std::vector<int> solve(std::vector<int>& input){

            int i = 0;
            int j = input.size()-1;
            int s = input.size()-1; 

            std::vector<int> result(input.size());

            while ( i <= j ) {

                if (std::abs(input[i]) > std::abs(input[j])){
                    result[s] = input[i] * input[i];
                    i++;
                } else {
                    result[s] = input[j] * input[j];
                    j--;
                }

                s--;
            
            }

            return result;
        }
};

int main(){

    Problem SquaringSortedArray;

    std::vector<int> input1 = {-2, -1, 0, 2, 3};
    std::vector<int> output1 = SquaringSortedArray.solve(input1);

    std::cout << "Output1: ";
    for (const int& val : output1){
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::vector<int> input2 = {-3, -1, 0, 1, 2};
    std::vector<int> output2 = SquaringSortedArray.solve(input2);

    std::cout << "Output2: ";
    for (const int& val : output2){
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::vector<int> input3 = {-3, -2, -1};
    std::vector<int> output3 = SquaringSortedArray.solve(input3);

    std::cout << "Output3: ";
    for (const int& val : output3){
        std::cout << val << " ";
    }
    std::cout << std::endl;
}