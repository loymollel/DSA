#include<iostream>
#include<cmath>

class Problem {
    public:

        int solve(int input) {
            if (input < 2) return input;

            int left = 2;
            int right = input/2;

            while (left <= right) {

                int mid = left + (right - left)/2;

                long midsq = (long) mid * mid;

                if ((midsq) > input)  
                    right = mid -1; 

                else if ((midsq) < input)
                    left = mid + 1;

                else return mid;
            }
            
            return right; 
        }

};

int main() {

    Problem SquareRoot;
    int input1 = 8;
    std::cout << "Input: x = " <<  input1 << " Output: " << SquareRoot.solve(input1) << std::endl;

    int input2 = 4;
    std::cout << "Input: x = " <<  input2 << " Output: " << SquareRoot.solve(input2) << std::endl;

    int input3 = 2;
    std::cout << "Input: x = " <<  input3 << " Output: " << SquareRoot.solve(input3) << std::endl;

    int input4 = 15;
    std::cout << "Input: x = " <<  input4 << " Output: " << SquareRoot.solve(input4) << std::endl;

}
