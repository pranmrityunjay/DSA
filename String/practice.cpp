class Solution {
private:
    
    bool validNumber(char p){
        if((p>='a' && p<='z')|| (p>='A' && p<='Z' )|| (p>='0'&& p<='9')){
            return 1;
        }
       return 0;
    }
    char changeChar(char c){
        if((c>='a' && c<='z')||(c>='0'&& c<='9')){
            return c;
        }
        else{
            char p =c-'A'+'a';
            return p;
        }
    }
    bool checkPalindrome(string temp){
        int s=0;
        int e=temp.length()-1;

        while(s<=e){
        if(temp[s]!=temp[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }}
        return 1;
    }

    
public:  
bool isPalindrome(string s) {  
        string temp="";
        for(int i=0;i<s.length();i++){
            if(validNumber(s[i])){
                temp.push_back(s[i]);
            }
           
            
        }
        for(int i=0;i<temp.length();i++){
            temp[i] =changeChar(temp[i]);
            

        }
        
        return checkPalindrome(temp);

       
        
    }
};