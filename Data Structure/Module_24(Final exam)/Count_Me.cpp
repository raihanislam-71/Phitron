#include <bits/stdc++.h>
using namespace std;
class sentence{
    public:
        string word;
        int cnt;
        sentence(string word,int cnt)
        {
            this->word = word;
            this->cnt = cnt;
        }
};

int main()
{
    int q;
    cin >> q;
    cin.ignore();
    while(q--)
    {
        string s;
        getline(cin , s);
        string word;
        stringstream ss(s);
        map<string , int> mp;
        int max = 0;
        string mxw = "";
        while(ss >> word)
        {
            mp[word]++;
            if(mp[word]>max){
                max = mp[word];
                mxw = word;
            }
        }
        

        cout<<mxw<<" "<<max<<endl;
    
    }
    return 0;
}

