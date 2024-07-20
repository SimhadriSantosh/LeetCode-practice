class Solution {
public:
    string getSmallestString(string s) {
        for(int i=0;i<s.size()-1;i++){
            int a = int(s[i]) - 48;
            int b = int(s[i+1]) - 48;
            if(a%2==b%2){
                if(a>b){
                    cout<<"check"<<endl;
                    swap(s[i],s[i+1]);
                    return s;
                }
            }
        }
        return s;
    }
};