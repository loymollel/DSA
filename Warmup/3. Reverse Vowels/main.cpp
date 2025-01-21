#include<iostream>
#include<string>

class Problem {
    public: 
        std::string solve(std::string input){

            std::string vowels {"aeiouAEIOU"};
            int first {0};
            int last = input.length() - 1;
            std::string result {input};

            while (first < last) {

                while (first < last && vowels.find(result[first]) == std::string::npos)
                    first++;

                while (first < last && vowels.find(result[last]) == std::string::npos)
                    last--;

                std::swap(result[first], result[last]);
                first++;
                last--;
            }

            return result;
        }   
};


int main(){
    
    Problem ReverseVowels;
    std::string input1 {"hello"};
    std::string output1 = ReverseVowels.solve(input1); 
    std::cout << "Problem: Reverse vowels of: " << input1 << std::endl;
    std::cout << "Solution: " << output1 << std::endl;

    std::string input2 {"YouTube"};
    std::string output2 = ReverseVowels.solve(input2); 
    std::cout << "Problem: Reverse vowels of: " << input2 << std::endl;
    std::cout << "Solution: " << output2 << std::endl;

    std::string input3 {"AEIOU"};
    std::string output3 = ReverseVowels.solve(input3); 
    std::cout << "Problem: Reverse vowels of: " << input3 << std::endl;
    std::cout << "Solution: " << output3 << std::endl;

    return 0;
}