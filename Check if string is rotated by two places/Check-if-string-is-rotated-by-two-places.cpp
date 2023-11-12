class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        
        if(str1.length()!=str2.length() || str1.length()<=2 || str2.length()<=2){
            return false;
        }
        int len=str1.length();
        
        string beg="";
        beg+=str1.substr(2)+str1.substr(0,2);
        string end="";
        end+=str1.substr(len-2,2) + str1.substr(0,len-2);
        
        if(beg == str2 or end==str2){
            return true;
        }
        return false;
    }

};