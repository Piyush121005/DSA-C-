#include <iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    TrieNode(char data){
        this->data = data;
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};


class Trie{
    public:
    TrieNode* root;

        Trie(){
            root = new TrieNode('\0');
        }
        
    void insertUtil(TrieNode*root,string word){
        //base case
           if(word.length()==0){
            root->isTerminal = true;
            return;
           } 

        //index assuming chars will be CAPS
        int index = word[0] - 'A';
        TrieNode* child;
        //Present
        if(root->children[index]!=NULL)
            child = root->children[index];
        //Absent
        else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        //Recursion
        insertUtil(child,word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root,word);
    } 

    bool searchUtil(TrieNode* root,string word){
        //base case
        if(word.length()==0) return root->isTerminal;

        //index
        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root->children[index]!=NULL)
            child = root->children[index];
        //Absent
        else{
            return false;
        }
        //recursion call
        return searchUtil(child,word.substr(1));
    }

    bool searchWord(string word){
       return searchUtil(root,word);
    }
};


int main(){
    Trie *t = new Trie();
    t->insertWord("JIGYASA");
    t->insertWord("MANASVI");
    t->insertWord("GAURANVI");
    t->insertWord("KUNIKA");
    t->insertWord("KANIKA");
    t->insertWord("KANISHKA");
    t->insertWord("TANIA");
    t->insertWord("NIA");
    t->insertWord("AASTHA");
    t->insertWord("JYOTI");
    t->insertWord("AKANSHA");
    t->insertWord("BHAWNI");
    t->insertWord("TIA");
    t->insertWord("JHALAK");
    t->insertWord("MUSKAN");
    t->insertWord("ANJALI");
    t->insertWord("UDDITI");
    t->insertWord("SHIVANGI");
    t->insertWord("ISHIKA");
    t->insertWord("SAKSHI");
    cout<<"The word is present oR absent: "<<t->searchWord("KANISHKA")<<endl;
    
    return 0;
}