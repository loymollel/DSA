#include<iostream>
#include<string>

class Problem {
    public:

    bool solve(std::string input){
        // Use Two Pointer Technique
        int begin {0}, end = input.length() -1;
        while (begin < end) {

            while (begin < end && !isalpha(input[begin]))
                begin++;
            
            while (begin < end && !isalpha(input[end]))
                end--;

            if (tolower(input[begin]) != tolower(input[end]))
                return false;

            begin++;
            end--;
        }
        return true;
    } 
};

int main() {

    Problem ValidPallindrome;

    std::string input1 {"A man, a plan, a canal, Panama!"};
    bool output1 = ValidPallindrome.solve(input1);
    std::cout << "Problem: Is '" << input1 << "' a valid pallindrome?" << std::endl;
    std::cout << "Answer: " << (output1 ? "True" : "False") << std::endl;

    std::string input2 {"Was it a car or a cat I saw?"};
    bool output2 = ValidPallindrome.solve(input2);
    std::cout << "Problem: Is '" << input2 << "' a valid pallindrome" << std::endl;
    std::cout << "Answer: " << (output2 ? "True" : "False") << std::endl;

    std::string input3 {"I never dreamed about success. I worked for it."};
    bool output3 = ValidPallindrome.solve(input3);
    std::cout << "Problem: Is '" << input3 << "' a valid pallindrome" << std::endl;
    std::cout << "Answer: " << (output3 ? "True" : "False") << std::endl;

    return 0;
}