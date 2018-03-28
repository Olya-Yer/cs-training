class Node
{
public:
  Node();
  Node(std::string w);
  Node* hashtable[];
  std::string word;
  Node *next;
  void addNode(std::string word, int hashtableIndex);
  int returnIndex(std::string word);
  void load(const char* filename);
  void doStuff(const char* word);
};
