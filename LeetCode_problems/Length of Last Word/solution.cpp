/*
  For this problem, we first simply remove the extra white spaces from front (using function ltrim) and back (using function rtrim). We then simply iterate through
  the trimmed string and get the last word from it... storing it in string t. Finally return the size of t using stl function t.size().
*/


class Solution {
public:
    std::string & ltrim(std::string & str)
    {
      auto it2 =  std::find_if( str.begin() , str.end() , [](char ch){ return !std::isspace<char>(ch , std::locale::classic() ) ; } );
      str.erase( str.begin() , it2);
      return str;                                             // returns the string with no extra blank spaces at the front.
    }

    std::string & rtrim(std::string & str)
    {
      auto it1 =  std::find_if( str.rbegin() , str.rend() , [](char ch){ return !std::isspace<char>(ch , std::locale::classic() ) ; } );
      str.erase( it1.base() , str.end() );                                            
      return str;                                             // returns the string with no extra blank spaces at the back.
    }
    
    int lengthOfLastWord(string s) {
        s = ltrim(rtrim(s));            // removes extra spaces fromfront and back of string
        string t = "";
        for(char c: s){                 // iterate through the string to get all words and finally having last word in string t.
            if(c == ' ')
                t = "";
            else
                t += c;                 
        }
        return t.size();                // returns the size of t which contains the last word.
    }
};
