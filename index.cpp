#include <iostream>
using namespace std;
int main(){
    
    int arr[]={2,4,3,1,6};
    int target=5;

     for(int i=0; i<=4; ++i){
        for(int j=i+1; j<=4; ++j){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<arr[j];
                return 0;
            }
        }
    }
}