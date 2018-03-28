#include <iostream>
#include <string>
#include "mining.h"
#include <fstream>

using namespace std;

void test()
{//input strings
  ifstream inFile;
  inFile.open("inputStrings.txt");
  if (!inFile)
  {
    cerr << "Unable to open file inputStrings.txt";
    exit(1);   // call system to stop
  }

  //output strings
  ifstream outFile;
  outFile.open("outputString.txt");
  if (!outFile)
  {
    cerr << "Unable to open file outputString.txt";
    exit(1);   // call system to stop
  }
  string in;
  string out;
  while ((inFile >> in) && (outFile >> out))
  {
    std::cout <<" input string: "<< in << '\n';
    std::cout <<"same input-hash 1: "<< returnHash(in) << '\n';
    std::cout <<"same input-hash 2: "<< returnHash(in) << '\n';
    std::cout <<"outut to compate : "<< out << '\n';
    string hash = returnHash(in);
    if (hash.compare(out) == 0) {
      std::cout << "pass" << '\n';
    } else {
      std::cout << "not pass" << '\n';
      string in = "";
      string out = "";
    }
  }
}

int main(int argc, char const *argv[]) {
  //test();
  std::cout << "returnHash(chech):" << returnHash("chech") << '\n';
  std::cout << "returnHash(chech):" << returnHash("chech") << '\n';
  return 0;
}
