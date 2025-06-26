#include <iostream>
#include <map>
#include <sstream>
using namespace std;
int main() {
    string sentence;
    cout << "enter a sentence: ";
    getline(cin, sentence);
    map<string, int> wordCount;
    stringstream ss(sentence);
    string word;
    while (ss >> word) {
        wordCount[word]++;
    }
    for (auto& pair : wordCount) {
        cout << pair.first << " -> " << pair.second << endl;
    }
    return 0;
}