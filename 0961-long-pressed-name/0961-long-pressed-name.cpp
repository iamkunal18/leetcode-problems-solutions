class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        bool ans = true;

        int j=0;
        int i=0;
        if(name[i] != typed[j]) return false;
        while(i<=name.size()) {
            if(j>=typed.size()) break;
            if(name[i]==typed[j]) {
                i++;
                j++;
            } else if(i!=0 && name[i-1] == typed[j]) {
                j++;
            } else if(name[i]!=typed[j] && (i!=0 && name[i-1] != typed[j])) {
                cout<<"here"<<endl;
                ans=false;
                break;
            }
        }

        if(i<name.size() || j<typed.size()) {
            cout<<"here2"<<endl;
            ans = false;
        }

        return ans;
    }
};