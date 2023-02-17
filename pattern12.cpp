#include<bits/stdc++.h>
using namespace std;
int main(){
int n=5;
for(int i=n;i>=1;i--){
    for(int k=1;k<=n-i;k++)
    cout<<k;
    for(int j=1;j<=2*i-2;j++)
    cout<<" ";
    for(int l=n-i;l>=1;l--)
    cout<<l;

    cout<<endl;
}
return 0;
}