class solution{

public:
bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        if(str1.size() != str2.size())
            return 0;
        
        // a is going to store mapping for str1
        // b is going to store mapping for str2
        vector<int> a(26, -1), b(26, -1);
        
        int n = str1.size();
        
        for(int i = 0; i < n; i++){
            if(a[str1[i] - 'a'] != -1){
                int x = a[str1[i] - 'a'];
                
                if(x != str2[i] - 'a')
                    return 0;
            }
            
            if(b[str2[i] - 'a'] != -1){
                int x = b[str2[i] - 'a'];
                
                if(x != str1[i] - 'a')
                    return 0;
            }
            
            a[str1[i] - 'a'] = str2[i] - 'a';
            b[str2[i] - 'a'] = str1[i] - 'a';
        }
        
        return 1;
        
    }
};