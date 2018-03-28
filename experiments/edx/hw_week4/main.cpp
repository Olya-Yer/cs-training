#include <string>
#include <iostream>
#include <stdio.h>
#include "speller.h"

int main(int argc, char const *argv[]) {
  Node nd;
  Node* node1 = new Node("hello");
  Node* node2 = new Node("world");
  node1->next = node2;
  nd.addNode("ABC",0);
  //std::cout << nd.hashtable[0]->word << '\n';
  //int index =  nd.returnIndex("Human");
  //std::cout << nd.load() << '\n';
  //const char* word = "Human";
  nd.load("Dict.txt");
  //std::cout << index << '\n';
  //std::cout << nd.hashtable[index]->word << '\n';
  //node1->word = "word";
  return 0;
}
