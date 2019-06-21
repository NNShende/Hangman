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
public:
    Word(string s);
    string output();
    string getString();
    bool guess(char c);
};

#endif