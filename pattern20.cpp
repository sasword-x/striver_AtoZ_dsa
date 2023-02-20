#include<bits/stdc++.h>
using namespace std;
int main(){
int n=5;
int inis=n+2;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
        }
    for(int j=1;j<=inis;j++)
    cout<<" ";
    for(int j=1;j<=i;j++){
        if(j==5)
        break;
    cout<<"*";
    }
    
    inis -=2;
    cout<<endl;
}
inis=1;
for(int i=1;i<n;i++){
    for(int j=i;j<n;j++){
        cout<<"*";
        }
    for(int j=1;j<=inis;j++)
    cout<<" ";
    for(int j=i;j<n;j++){
    cout<<"*";
    }
    inis +=2;
    cout<<endl;
}
return 0;
}