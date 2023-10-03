class Solution {
public:
    bool isValidSerialization(string a) {
        int i,j,k,c=1,s=0;
        if(a.size()==0 )
        return 1;

        if(a[0]=='#' and a.size()!=1)
        return 0;

        for(i=0;i<a.size();i+=1){
            c-=1;
            if(c<0)
            return 0;

            if(a[i]!='#'){
                c+=2;
            }
            
            
            i++;
            while(i<a.size() and a[i]!=','){
                i++;
            }
        }
        cout<<c;

        if(c==0)return 1;

        return 0;
        
    }
};
