#include<iostream>


using namespace std;

int main(){

    int n; 
    int j;
    cin>> n; 

    for(int i=1; i<=n; i++){
        int k=i;
        for(j=1; j <= (n-i); j++){
            cout<<" ";
        }
        for(; j<=n; j++){
            cout<<k;
            k--;
        }
        k=1;
        for(; j<(n+i); j++){
            k++;
            cout<<k;
        }
        cout<<endl;
    }


    return 0;

}