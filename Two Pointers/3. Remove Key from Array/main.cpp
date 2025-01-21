#include<iostream>
#include<vector>
#include<algorithm>

class Problem {
public:
    // int solve(std::vector<int>& in, int k) {

    //     int c = 0;
    //     int r = 0;

    //     for (int i = 0; i!=in.size(); i++) {

    //         if (in[i] != k) {
    //             std::swap(in[i], in[r]);
    //             r++;
    //             c++;
    //         }

    //     }

    //     return c;
    // }

    int solve(std::vector<int>& in, int k) {

        int r = 0;

        for (int i = 0; i!=in.size(); i++) {

            if (in[i] != k) {

                in[r] == in[i];
                r++;
            }

        }

        return r;
    }
};

int main() {

    Problem RemoveKeyFromArray;
    std::vector<int> input {3, 2, 3, 6, 3, 10, 9, 3};
    int key = 3;
    std::cout << RemoveKeyFromArray.solve(input, key) << std::endl;

    std::vector<int> input2 {2, 11, 2, 2, 1};
    int key2 = 2;
    std::cout << RemoveKeyFromArray.solve(input2, key2) << std::endl;

    std::vector<int> input3 {2, 11, 2, 2, 1};
    int key3 = 1;
    std::cout << RemoveKeyFromArray.solve(input3, key3) << std::endl;
}