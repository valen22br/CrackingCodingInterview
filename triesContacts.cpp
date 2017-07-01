#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Node {
public:
    Node() { mContent = ' '; mMarker = false; }
    ~Node() {}
    char content() { return mContent; }
    void setContent(char c) { mContent = c; }
    bool wordMarker() { return mMarker; }
    void setWordMarker() { mMarker = true; }
    Node* findChild(char c);
    void appendChild(Node* child) { mChildren.push_back(child); }
    vector<Node*> children() { return mChildren; }

private:
    char mContent;
    bool mMarker;
    vector<Node*> mChildren;
};

class Trie {
public:
    Trie();
    ~Trie();
    void addWord(string s);
    bool searchWord(string s);
    bool searchPartialWord(string s);
    void deleteWord(string s);
private:
    Node* root;
};

Node* Node::findChild(char c)
{
    for ( int i = 0; i < mChildren.size(); i++ )
    {
        Node* tmp = mChildren.at(i);
        if ( tmp->content() == c )
        {
            return tmp;
        }
    }

    return NULL;
}

Trie::Trie()
{
    root = new Node();
}

Trie::~Trie()
{
    // Free memory
}

void Trie::addWord(string s)
{
    Node* current = root;

    if ( s.length() == 0 )
    {
        current->setWordMarker(); // an empty word
        return;
    }

    for ( int i = 0; i < s.length(); i++ )
    {        
        Node* child = current->findChild(s[i]);
        if ( child != NULL )
        {
            current = child;
        }
        else
        {
            Node* tmp = new Node();
            tmp->setContent(s[i]);
            current->appendChild(tmp);
            current = tmp;
        }
        if ( i == s.length() - 1 )
            current->setWordMarker();
    }
}

bool Trie::searchPartialWord(string s)
{
    cout << "Entrou"<< endl;
    int lengthFound = 0;
    Node* current = root;

    while ( current != NULL )
    {
        for ( int i = 0; i < s.length(); i++ )
        {
            //cout << "Inside for: " << i << endl;
            Node* tmp = current->findChild(s[i]);
            if ( tmp == NULL )
            {
                if(s.length() == lengthFound)
                    return true;
                return false;
                //break;
            }
            
            lengthFound++;    
            current = tmp;
            
        }
    }
    
    return false;
}

bool Trie::searchWord(string s)
{
    Node* current = root;

    while ( current != NULL )
    {
        for ( int i = 0; i < s.length(); i++ )
        {
            Node* tmp = current->findChild(s[i]);
            if ( tmp == NULL )
                return false;
            current = tmp;
        }

        if ( current->wordMarker() )
            return true;
        else
            return false;
         
        /*
        if(current != NULL)
            return true;
       */
    }

    return false;
}

int main(){
    int n;
    cin >> n;
    int countFind = 0;
    
    Trie* trieTest = new Trie();
 
    for(int a0 = 0; a0 < n; a0++){
        string op;
        string contact;
        cin >> op >> contact;
        
        if(op == "add")
        {
            trieTest->addWord(contact);
            
        }
        else if(op == "find")
        {
            if(trieTest->searchPartialWord(contact))
                countFind++;
        }
        else
        {
            cout << "wrong entry"<< endl;
        }
    }
    
    cout << countFind << endl;
    
    
    return 0;
}
