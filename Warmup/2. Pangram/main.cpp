#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

class Solution {
    public:
        bool checkIfPangram(string input) {

            unordered_set<char> myset;

            for (int i=0; i!=input.length(); ++i) {

                char current_char = tolower(input[i]);

                if (isalpha(current_char)){
                    myset.insert(current_char);
                } 
           
            }

            return (myset.size() == 26); 
        };
};

int main(){
    Solution solution;

    string input = "TheQuickBrownFoxJumpsOverTheLazyDog";

    bool output = solution.checkIfPangram(input);

    cout << (output ? "true" : "false") << endl;
}