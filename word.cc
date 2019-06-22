#include <string>
#include <vector>
#include "word.h"

Word::Word(std::string s){
    value = s;
    length = s.length();
    for(int i = 0; i < length; ++i){
        guessed.emplace_back(false);
    }
    for(int i = 0; i < 26; ++i){
        alphabet.emplace_back(false);
    }
}

std::string Word::getString(){
    return value;
}

std::string Word::output(){
    std::string retval = "";
    for(int i = 0; i < length; ++i){
        if(guessed.at(i)) retval += value[i];
        else retval += "_";
    }
    return retval;
}

int Word::guess(char c){
    if(c < 'a' || c > 'z') throw std::string("ERROR: Not a lowercase letter");
    if(alphabet.at(c - 'a') == true) throw std::string("ERROR: Letter has already been guessed");
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

bool Word::isGuessed(){
    for(auto a:guessed){
        if(!a) return false;
    }
    return true;
}

ostream & operator<<(ostream &out, Word &w){
    out << w.output();
    return out;
}
