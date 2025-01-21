#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Problem {
    public:
        int solve(vector<string>& words, string word1, string word2) {

            int position1 {-1};
            int position2 {-1};
            int shortestDistance = words.size();

            for (int i=0; i != words.size(); i++){
                if (words[i] == word1) {
                    position1 = i;
                } else if (words[i] == word2) {
                    position2 = i;
                }

                if (position1 != -1 && position2 != -1) {
                    shortestDistance = min(shortestDistance, abs(position1 - position2));
                }
            }
            
            return shortestDistance;
        }
};


int main() {

    Problem ShortestWordDistance;

    vector<string> words1 {"the", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
    string word1 {"fox"};
    string word2 {"dog"};
    int solution1 = ShortestWordDistance.solve(words1, word1, word2);
    cout << "The shortest distance between " << word1 << " and " << word2 << " is " << solution1 << " words." << endl;

    vector<string> words2 {"a", "b", "c", "d", "a", "b"};
    string word3 {"a"};
    string word4 {"b"};
    int solution2 = ShortestWordDistance.solve(words2, word3, word4);
    cout << "The shortest distance between " << word3 << " and " << word4 << " is " << solution2 << " words." << endl;

    vector<string> words3 {"a", "c", "d", "b", "a"};
    string word5 {"a"};
    string word6 {"b"};
    int solution3 = ShortestWordDistance.solve(words3, word5, word6);
    cout << "The shortest distance between " << word5 << " and " << word6 << " is " << solution3 << " words." << endl;

    vector<string> words4 {"a", "b", "c", "d", "e"};
    string word7 {"a"};
    string word8 {"e"};
    int solution4 = ShortestWordDistance.solve(words4, word7, word8);
    cout << "The shortest distance between " << word7 << " and " << word8 << " is " << solution4 << " words." << endl;

    return 0;
}