// Simple implementation of std::sort() function 
//  http://opc.iarcs.org.in/index.php/problems/SORTROWS
#include <bits/stdc++.h>
int main()
{
    int n;
    cin>>n;
    
    vector<int> lis[n];
    int lk=0;
    for(int i=0;i<n;i++){
        
        while(true){
            cin>>lk;
            if(lk==-1) break;
            
            lis[i].push_back(lk);
        }
        
    }
    sort(lis,lis+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<lis[i].size();j++){
            cout<<lis[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
