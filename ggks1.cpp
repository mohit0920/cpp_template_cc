#include<iostream>


using namespace std;

int main(){
    int t;
    unsigned short int n, h[101], op[101]={};
    
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>h[j];
        }
        for(int j =1; j<n-1; j++){
            if (h[j]>h[j-1] && h[j] > h[j+1]) {
                op[i]++;
            }
        }
    }
    for (int i=0; i<t;i++){
        cout<<"Case #"<<i+1<<": "<<op[i]<<"\n";
    }
    
    return 0;
}

