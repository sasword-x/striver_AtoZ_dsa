#include<bits/stdc++.h>
using namespace std;

void pattern15(int n){
    for(int i=n;i>=1;i--){
        for(char ch='A';ch <= 'A'+i-1;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern16(int n){
    char ch='A';
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
        cout<<ch;
}
        ch++;
        cout<<endl;
    }
}

void pattern17(int n){

    for(int i=0;i<n-1;i++)
    {
    for(int j=1;j<n-i-1;j++){
    cout<<" ";
    }
    char ch='A';
    int breakpoint=(2*i+1)/2;
    for(int k=1;k<=2*i+1;k++){
    cout<<ch;
    if(k <= breakpoint ) ch++;
    else{
        ch--;
    }
    }
    cout<<endl;
    
    }
}

void pattern18(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A'+n-i;ch <='A'+n-1;ch++)
        cout<<ch<<" ";
        cout<<endl;
    }
}

void pattern19(int n){
    
}

int main(){
freopen("input.txt", "r", stdin);
freopen("output.txt","w", stdout);
int n;
cin>>n;
pattern18(n);
return 0;
}