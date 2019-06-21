#include <string>
#include <vector>
#include "word.h"

Word::Word(string s){
    value = s;
    length = s.length();
    for(int i = 0; i < length; ++i){
        guessed.emplace_back(false);
    }
    for(int i = 0; i < 26; ++i){
        alphabet.emplace_back(false);
    }
}

string Word::getString(){
    return value;
}

string Word::output(){
    string retval = "";
    for(int i = 0; i < length; ++i){
        if(guessed.at(i)) retval += value[i];
        else retval += "_";
    }
    return retval;
}

int Word::guess(char c){
    if(c < 'a' || c > 'z') throw "ERROR: Not a lowercase letter";
    if(alphabet.at(c - 'a') == true) throw "ERROR: Letter has already been guessed";
    int count = 0;
    alphabet.at(c - 'a') = true;
    for(int i = 0; i < length; ++i){
        if(value[i] == c){
            guessed.at(i) = true;
            count++;
        }
    }
    return count;
}
