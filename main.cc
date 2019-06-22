#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "word.h"

const int FILE_LENGTH = 80045;
const int MAX_GUESSES = 5;

void playGame(std::string word){
    Word gameWord = Word(word);
    int guesses = MAX_GUESSES;
    while(gameWord.isGuessed && guesses > 0){
        std::cout << "Here is the word: " << gameWord << std::endl;
        while(1){
            try{
                std::cout << "Enter your guess as a lowercase letter" << std::endl;
            } catch (std::string e){
                std::cout << e << std::endl;
            }
        }
    }
}


int main(){
    bool playAgain = true;
    srand(time(0));
    while(playAgain){
        int r = ((double) rand() / (RAND_MAX)) * FILE_LENGTH + 1;
        std::string s;
        std::ifstream wordfile("words.txt");
        for(int i = 0; i < r; ++i){
            getline(wordfile,s);
        }
        playGame(s);
        while(1){
            std::cout << "Would you like to play again? 'Y' or 'N'" << std::endl;
            char c;
            std::cin >> c;
            if(c != 'Y' && c != 'N'){
                std::cout << "ERROR:  invalid input" << std::endl;
                continue;
            }
            if(c == 'Y') break;
            if(c == 'N') return 0;
        }
    }
}
