#include <iostream>
#include <sstream>
#include <bitset>
#include <vector>
#include <iomanip>
#include <cstring>
#include <stdlib.h>

using namespace std;



// Converts the ASCII string to a binary representation.
vector<unsigned long> convert_to_binary(const string);

// Pads the messages to make sure they are a multiple of 512 bits.
vector<unsigned long> pad_to_512bits(const vector<unsigned long>);

// Changes the n 8 bit segments representing every ASCII character to 32 bit words.
vector<unsigned long> resize_block(vector<unsigned long>);

// The actual hash computing.
string compute_hash(const vector<unsigned long>);

//the whole thing together
string returnHash(string message);

//get number from hex which is encrypted hash
long int returnNumber(string hash);

//get number from message by hashing it and converting to integer
long int finalNumber(string message);

//try changing the string until hash<initial value
void mining(string message);
