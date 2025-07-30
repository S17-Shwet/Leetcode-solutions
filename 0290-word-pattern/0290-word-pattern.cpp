class Solution {
public:
    bool wordPattern(string pattern, string s) {
     
     unordered_map<char,string> charToWord;//for mapping char to each word in string
      unordered_map<string,char> wordToChar;
      istringstream iss(s);
      vector<string> words;
      string word;

    //   split the input string `s` into words
    while(iss>>word)
    {
        words.push_back(word);
    }
    // if pattern length and word count doesnt match ,return false
    if(pattern.length() != words.size())
    {
        return false;
    }
    for(int i=0;i<pattern.length();++i)
    {
        char c = pattern[i];
        string w = words[i];

        // check char to word mapping
        if(charToWord.count(c))
        {
            if(charToWord[c]!=w)
            return false;
        }
        else
        {
            charToWord[c]=w;
        }
        // check word to char mapping
        if(wordToChar.count(w))
        {
            if(wordToChar[w]!=c)
            return false;
        }
        else
        {
            wordToChar[w]=c;
        }
    }
    return true;

        
    }
};