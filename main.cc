#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>

const int textfileLength = 80045;

void playGame(std::string word){

}


int main(){
    bool playAgain = true;
    srand(time(0));
    while(playAgain){
        int r = ((double) rand() / (RAND_MAX)) * textfileLength + 1;
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
