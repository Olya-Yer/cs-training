#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
  int key = atoi(argv[1]);
  cout << "key is: "<< key << '\n';
  string message;
  cout << "enter message to cypher: " << '\n';
  cin >> message;  
  std::cout << "message size: "<< message.size() << '\n';
  for (int i = 0; i < message.size(); i++) {
    //std::cout << i ;
    if (isalpha(message[i])) {
      if (isupper(message[i])) {
        char letter = message[i];
        int index = letter%65;
        int cypher = (index+key)%26;
        char cyperLetter = cypher+65;
        cout << cyperLetter ;
      } else {
        char letter = message[i];
        int index = letter%97;
        int cypher = (index+key)%26;
        char cyperLetter = cypher+97;
        cout << cyperLetter ;

      }
    }
  }
  return 0;
}
