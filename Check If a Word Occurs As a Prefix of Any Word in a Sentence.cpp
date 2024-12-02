class Solution {
private:
    bool compare(string a, string b){
        if(b.size() > a.size())return false;

        for(int i=0;i<b.size();i++){
            if(a[i]!=b[i])return false;
        }
        return true;
    }
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        string word="";
        vector<string>words;

        for(char ch:sentence){
            if(ch==' '){
                if(!word.empty()){
                    words.push_back(word);
                    word="";
                }
            }else word+=ch;
        }
        if(!word.empty()){
            words.push_back(word);
        }
        
        for(int i=0;i<words.size();i++){
            if(compare(words[i],searchWord))return i+1;
        }
        return -1;
    }
};