#include<iostream>



using namespace std;

int sum(int n){

 int counter =0; 
 for(int i=1; i<=n; i++){
     counter = counter+i;
 }
 return counter;

}
int main(){

    int n;
    cin>>n; 

    int result = sum(n); 
    cout<< result <<endl;


    return 0;




}



