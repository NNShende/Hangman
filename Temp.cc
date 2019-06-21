#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream i("dictionary.txt");
    ofstream o("words.txt");

    string s;
    while(getline(i,s)){
        if(s.length() > 4){
            o << s << endl;
        }
    }
}
