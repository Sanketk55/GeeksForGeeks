//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
private:
    bool help(string s, unordered_set<string> & dict, int index){
        if(index == s.length()) return true;
        string str ="";
        bool a = false;
        for(int i=index;i<s.length();i++){
            str += s[i];
            if(dict.find(str)!=dict.end()){
                a = a | help(s, dict,  i+1);
            }
        }
        return a;
    }
public:
    int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
        unordered_set<string> dict;
        for(auto str : dictionary){
            dict.insert(str);
        }
        return help(s, dict, 0);
    }
};