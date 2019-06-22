#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "word.h"
#include "gallow.h"

const int FILE_LENGTH = 80045;
const int MAX_GUESSES = NUM_STATES - 1;

void playGame(std::string word){
    Word gameWord = Word(word);
    int guesses = MAX_GUESSES;
    //std::cout << gameWord << " " << gameWord.isGuessed() << " " << guesses << std::endl;
    while(!gameWord.isGuessed() && guesses > 0){
        std::cout << "Here is the word: " << gameWord << std::endl;
        while(1){
            try{
                std::cout << "Enter your guess as a lowercase letter" << std::endl;
                char c;
                std::cin >> c;
                int instances = gameWord.guess(c);
                if(instances == 0){
                    guesses--;
                    std::cout << c << " did not appear in word." << std::endl;
                }
                else{
                    std::cout << c << " appeared " << instances << " times in the word." << endl;
                }
                break;
            } catch (std::string e){
                std::cout << e << std::endl;
            }
        }
        std::cout << states[NUM_STATES - 1 - guesses];
        if(guesses == 0){
            std::cout << "You Lose..." << std::endl;
            std::cout << "The word was: " << gameWord.getString() << "." << endl;
        }
        if(gameWord.isGuessed()){
            std::cout << "You Win!" << std::endl;
            std::cout << "The word was: " << gameWord.getString() << "." << endl;
            std::cout << "You had " << guesses << " guesses before the man was hung." << std::endl;
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
        //std::cout << s << std::endl;
        playGame(s);
        while(1){
            std::cout << "Would you like to play again? 'Y' or 'N'" << std::endl;
            char c;
            std::cin >> c;
            if(c != 'Y' && c != 'N'){
                std::cout << "ERROR:  invalid input" << std::endl;
                continue;
            }
            if(c == 'Y'){
                playAgain = true;
                break;
            }
            if(c == 'N'){
                playAgain = false;
                break;
            }
        }
    }
}
