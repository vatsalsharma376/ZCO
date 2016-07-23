#include <bits/stdc++.h>
#define getcx getchar_unlocked
#define putcx putchar_unlocked
using namespace std;
bool sqr(long long int n){
    string s;
    stringstream ss;
    ss<<n;
    s=ss.str();
    //cout<<s<<endl;
    int dig[10];
    for (int i = 0; i < 10; ++i)
    {
        dig[i]=0;
        /* code */
    }
    for(int i=0;i<s.size();i++) dig[(s[i]-'0')]+=1;
    if(dig[0]>0) return false;
    for(int i=1;i<10;i++){
        if(dig[i]>1) return false;
    }
    return true;
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n>=987654321){
        printf("0");
        return 0;
    }
    while(true){
        ++n;
        
        if(sqr(n)){
            printf("%d",n);
            break;
        }
    }   
    return 0;
}
