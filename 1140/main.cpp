#include <iostream>
#include <vector>
#include <string>
#include <sstream>
 
using namespace std;

vector<string> split(const string&, char);
 
int main() {
    string verse;
    
    while (getline(cin, verse)) {
        if (verse[0] == '*') break;
        
        vector<string> tokens = split(verse, ' ');
        string word = tokens[0];
        bool isTautogram = true;
        
        for (size_t i = 1; i < tokens.size(); i++) {
            char firstChar = tolower(tokens[i][0]);
            
            if (firstChar != tolower(word[0])) {
                isTautogram = false;
                break;
            }
        }
        
        verse.clear();
     
        if (isTautogram) 
            cout << "Y\n";
        else 
            cout << "N\n";
    }

    return 0;
}


vector<string> split(const string &str, char delimiter) {
    vector<string> splits;
    string token;
    stringstream strstream(str);
    
    while (getline(strstream, token, delimiter))
        splits.push_back(token);
    
    return splits;
}
