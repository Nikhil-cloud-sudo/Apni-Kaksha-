#include<iostream>
#include<climits>

using namespace std; 


int main(){


    int n1, n2; 
    cin>>n1 >> n2;
    int target;
    cin>>target;

    int arr[n1][n2];

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cin>>arr[i][j];
         }
    }
    
    bool find = false; 

    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr[i][j] == target)
                find = true; 
            
        }
    }

    if(find){
        cout<<"FOUND";
    }
    else{
        cout<<"NOT FOUND";
    }

    return 0; 

}