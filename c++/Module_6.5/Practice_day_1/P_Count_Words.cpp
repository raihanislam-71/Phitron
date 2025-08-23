#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    bool inside_word = false;
    int cnt = 0;
    for(char c : s)
    {
        if(isalpha(c))
        {
            if(inside_word == false)
            {
                cnt++;
            }
            inside_word = true;
        }
        else
        {
            inside_word = false;
        }
    } 

    cout << cnt << endl;

    return 0;
}

// // or

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);

//     string symbols = "!,.?";
//     for (char &c : s)
//     {
//         if (symbols.find(c) != string::npos)
//         {
//             c = ' ';
//         }
//     }
//     stringstream ss(s);
//     string word;
//     int count = 0;
//     while (ss >> word)
//     {
//         count++;
//     }
//     cout << count << endl;
//     return 0;
// }
