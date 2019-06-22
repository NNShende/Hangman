#ifndef WORD_H
#define WORD_H

#include <string>
#include <vector>

using namespace std;

class Word{
private:
    string value;
    int length;
    vector<bool> guessed;
    vector<bool> alphabet;
public:
    Word(string s);
    string output();
    string getString();
    int guess(char c);
    bool isGuessed();
};

ostream & operator<<(ostream &out, Word &w);

#endif