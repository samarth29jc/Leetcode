class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int>vpp;
        int ans=0;
      for(int i=0;i<allowed.size();i++){
         vpp.push_back(allowed[i]);
      }  
      for(int i=0;i<words.size();i++){
                    string word=words[i];
            bool equal=true;
        for(int j=0;j<word.size();j++){
           
            if(find(vpp.begin(),vpp.end(),word[j])==vpp.end()){
                equal=false;
            }
           
              

            }
             if(equal){
                ans++;
             }  
            
        }
       
      
    
    return ans;}
};