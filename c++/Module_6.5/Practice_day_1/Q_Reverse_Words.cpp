#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int count =0;
    
    while(ss >> word)
    {
        count ++;
       
    }

    stringstream cc(s);

    // while (cc>> word)
    // {
    //     count--;
    //     for(int i=word.size()-1; i>=0; i--)
    //     {
    //         cout << word[i];
    //     }

    //     if(count==0){

    //     }
    //     else{
    //         cout<<" ";
    //     }
    // }

    // or 
    while (cc>> word)
    {
        count--;
        reverse(word.begin(),word.end());
        cout << word;

        if(count==0){

        }
        else{
            cout<<" ";
        }
    }
    
    
    return 0;
}
