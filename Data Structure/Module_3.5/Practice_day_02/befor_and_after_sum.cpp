// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     int total_sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         total_sum += a[i];
//     }

//     int left_sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int right_sum = total_sum - left_sum - a[i];

//         if (left_sum == right_sum)
//         {
//             cout << i << endl;
//             return 0;
//         }

//         left_sum += a[i];
//     }

//     cout << -1 << endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int arry[1000];

//     for(int i=0;i<n;i++){
//         cin>>arry[i];
//     }

//     for(int i=0;i<n;i++){
//         int first = 0;
//         int last = 0;

//         for(int j=i+1;j<n;j++){
//             first += arry[j];
//         }
        
//         for(int j=0;j<i;j++){
//             last += arry[j];
//         }
        
//         if(first == last){
//             cout<<i<<"\n";
//             return 0;
//         }
//     }
//     return 0;

// }
