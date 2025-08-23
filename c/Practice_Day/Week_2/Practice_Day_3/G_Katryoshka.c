// #include <stdio.h>
// int main()
// {
//     int a , b , c;
//     scanf("%d %d %d",&a,&b,&c);
//     int count = 0;

//     while (a!=0 && b!=0 && c!=0)
//     {
//         count++;
//         a--;
//         b--;
//         c--;
//     }
    
//     while (a!=0 && c!=0)
//     {
//         count++;
//         a-=2;
//         c--;
//     }   
//     printf("%d",count);
//     return 0;
// }

#include<stdio.h>
int main(){
    long long int a,b,c,i;
    scanf("%lld %lld %lld",&a,&b,&c);
    //Two eyes and one body.
    //Two eyes, one mouth, and one body.
    //One eye, one mouth, and one body.


if(a<=b && a<=c){
    i=a;
}
else if(b<=a && b<=c){
    i=b;
}
else if(c<=a && c<=b){
    i=c;
}

b-=i;
a-=i;
c-=i;

if((a/2)<=c){
    i+=a/2;
}
else{
    i+=c;
}
printf("%lld", i);

return 0;
}