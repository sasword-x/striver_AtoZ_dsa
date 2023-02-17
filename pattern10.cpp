#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
for(int i=1;i<=2*n-1;i++){
    int stars=i;
    if(i>n) 
    stars=2*n-i;
    for(int i=1;i<=stars;i++)
    cout<<"*";
    cout<<endl;
}


return 0;
}