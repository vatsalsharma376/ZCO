//    http://opc.iarcs.org.in/index.php/problems/NEXTPERM


#include <bits/stdc++.h>
 
#define pb(x) push_back(x);
#define in(y) insert(y);
#define tt(t) while(t--)
#define itr ::iterator it;
#define ll long long
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define si set<int>                      
#define msi map<string, int>
#define new cout<<endl
#define ff(n) for(int i=0;i<n;i++)
#define all(v) sort(v.begin(),v.end())
 
using namespace std;
 
int main(){
    
    int n,k;
    cin>>n>>k;
    while(k--){
        vector<int> lis(n);
        ff(n){
            cin>>lis[i];
        }
        int lo=0;
        do{
            
            if(lo==1) {
                for(int i=0;i<n;i++) 
                    cout<<lis[i]<<" ";
                break;
            }
            
            ++lo;
        }while(next_permutation(lis.begin(),lis.end()));
        cout<<"\n";
    }
    return 0;
}
