#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;  //O(logN)
    mp["Raihan"]=71;
    mp["sariar"]=20;
    mp["nabil"]=0;
    mp["nithor"]=59;
    mp["raju"]=62;

    ////akta dhakle chaile
    // cout<<mp["nithor"]<<endl;

    //sob gola ak shate dhakte chaile
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    //normali map 0 hole nai bojai kinto kono value jodi 0 hoi ta hole amra bojbo ki kore je aita ase ki na
    if(mp.count("nabil"))
    {
        cout<<"Ase"<<endl;
    }
    else
    {
        cout<<"Nai"<<endl;
    }

    
    // ////or
    // mp.insert({"raihan",71});
    // mp.insert({"nithor",59});
    // mp.insert({"saroar",20});

    // ////akta dhakle chaile
    // // cout<<mp["nithor"]<<endl;

    // //sob gola ak shate dhakte chaile
    // for(auto it=mp.begin(); it!=mp.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    return 0;
}
