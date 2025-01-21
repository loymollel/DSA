#include<iostream>
#include<string>
#include<unordered_map>

class Problem {
    public:
        bool unoptimal_solve(std::string input1, std::string input2){

            std::unordered_map<char,int> map1;
            std::unordered_map<char,int> map2;

            if (input1.length() != input2.length())
                return false;

            for (char c : input1) {
                // if (map1.find(c) != map1.end()){
                //     map1.at(c) += 1; 
                // } else {
                // map1.insert({c, 1});
                // }
                
                // more optimal
                map1[c]++;
            }

            for (char c : input2) {
                // if (map2.find(c) != map2.end()){
                //     map2.at(c) += 1; 
                // } else {
                //     map2.insert({c, 1});
                // }

                map2[c]++;
            }

            if (map1 == map2)       
                return true;
            else    
                return false;
        }

        bool solve(std::string input1, std::string input2) {

            if (input1.length() != input2.length())
                return false;

            std::unordered_map<char, int> map;

            for (int i=0; i!=input1.length(); i++) {

                map[input1[i]]++;
                map[input2[i]]--;

            }

            for (auto [letter, count]: map) {
                if (count != 0)
                    return false;
            }
            
            return true;
        }
};

int main(){

    Problem validAnagram;
    std::string input1 = "listen";
    std::string input2 = "silent";
    std::cout << "Is '" << input1 << "' and '" << input2 << "' an anagram?" << std::endl;  
    std::cout << "Answer: " << (validAnagram.solve(input1, input2) ? "True" : "False ") << std::endl;

    std::string input3 = "car";
    std::string input4 = "rat";
    std::cout << "Is '" << input3 << "' and '" << input4 << "' an anagram?" << std::endl;  
    std::cout << "Answer: " << (validAnagram.solve(input3, input4) ? "True" : "False ") << std::endl;

    std::string input5 = "hello";
    std::string input6 = "world";
    std::cout << "Is '" << input5 << "' and '" << input6 << "' an anagram?" << std::endl;  
    std::cout << "Answer: " << (validAnagram.solve(input5, input6) ? "True" : "False ") << std::endl;

    return 0;
}