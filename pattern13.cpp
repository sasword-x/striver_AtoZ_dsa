#include<bits/stdc++.h>
using namespace std;
int main(){
int n=5;
int kit=1;
for(int i=1;i<=n;i++){
    for(int k=1;k<=i;k++){
        cout<<kit<<" ";
        kit=kit + 1;
    }
    cout<<endl;
}

return 0;
}