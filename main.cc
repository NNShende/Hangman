#include <iostream>
#include <string>
#include <fstream>

std::ifstream wordfile("words.txt");

void playGame(std::string word){

}


int main(){
    bool playAgain = true;
    while(playAgain){

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
