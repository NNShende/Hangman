#include <string>
#include <vector>
#include "word.h"

Word::Word(string s){
    value = s;
    length = s.length();
    for(int i = 0; i < length; ++i){
        guessed.emplace_back(false);
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
