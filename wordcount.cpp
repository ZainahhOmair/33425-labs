#include <iostream>
#include <string>
using namespace std;

void wordcount(){
    string sentence;
    cout<<"enter sentence to count words";
    getline(cin, sentence);
    int spacecount = 0;
    int wordcount = 0;
    

    for(int i = 0; i<sentence.length(); i++){
        if(sentence[i] == ' '){
            spacecount = spacecount + 1;
        }
    }
    wordcount = spacecount + 1;
    cout<<"total words are:"<<wordcount;
    

}
int main(){
    wordcount();
    return 0;
}