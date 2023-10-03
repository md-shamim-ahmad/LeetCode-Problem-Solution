class Solution {
public:
    bool isValidSerialization(string str) {
        int count=1;
        if(str.size()==0 )
        return 1;

        if(str[0]=='#' and str.size()!=1)
        return 0;

        for(int i=0;i<str.size();i+=1){
            count-=1;
            if(count<0)
            return 0;

            if(str[i]!='#'){
                c+=2;
            }
            
            
            i++;
            while(i<str.size() and str[i]!=','){
                i++;
            }
        }
        cout<<c;

        if(count==0)return 1;

        return 0;
        
    }
};
