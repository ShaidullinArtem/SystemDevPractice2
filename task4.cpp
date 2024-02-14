#include "iostream"
#include <vector>
#include "string"
using namespace std;

class Dictionary {
private:
    vector<string> words;
public:

    void add(const string& word) {
        words.push_back(word);
    }

    void remove(const string& word) {
        for (auto it = words.begin(); it != words.end(); ++it) {
            if (*it == word) {
                words.erase(it);
                break;
            }
        }
    }

    void print() {
        for (int i = 0; i < this->words.size(); ++i) {
            cout << words[i] << endl;
        }
    }
};


int main() {
    Dictionary dict;

    dict.add("test1");
    dict.add("test2");
    dict.print();

//    dict.remove("test2");
    dict.print();
}