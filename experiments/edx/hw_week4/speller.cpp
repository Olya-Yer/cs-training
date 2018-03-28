#include <string>
#include <iostream>
#include <stdio.h>
#include "speller.h"
using namespace std;

Node::Node()
{
  Node* hashtable[26] = {0};
}
Node::Node(std::string w)
{
  this->word = w;
  next = NULL;
}
static Node* hashtable[26] = {0};

void Node::addNode(std::string word, int hashtableIndex)
{
  Node* new_node = new Node(word);
  if (hashtable[hashtableIndex]== 0) {
    Node* head = new_node;
    hashtable[hashtableIndex]=head;
  } else {
    new_node->next = hashtable[hashtableIndex];
    Node* head = new_node;
    hashtable[hashtableIndex]=head;
  }
}
int Node::returnIndex(std::string word)
{

  return word[0]%65;
}
void Node::doStuff(const char* word)
{
  int index;
  std::string new_word = word;
  index = returnIndex(new_word);
  //std::cout << index << '\n';
  addNode(new_word,index);
}

void Node::load(const char* filename)
{
  char word[80];
  FILE * pFile;
  pFile = fopen(filename,"r");
  while (fscanf(pFile,"%s",word) != EOF)
  {
    doStuff(word);
  }
}
