#include<iostream>
using namespace std;

void ascendingBubble(int array[], int n){
    for(int boundary=n-2;boundary>=0;boundary--){
        for(int i=0;i<=boundary;i++){
            if(array[i]>array[i+1]){
                swap(array[i],array[i+1]);
            }
        }
    }
}


void print(int array[],int size){
    for(int i=0;i<size;i++){
        if(i!=size-1){
            cout<<array[i]<<", ";
        }else{
            cout<<array[i]<<endl;
        }
    }
}

int main(){
    int n=5;
    int array[5]={9,13,15,11,2};
   
    cout<<"Before sorting: "<<endl;
    print(array,n);

    cout<<"\n"<<endl;

    cout<<"After sorting (ascending): "<<endl;
    ascendingBubble(array,n);
    print(array,n);
    
    // cout<<"\n"<<endl;
    
    // cout<<"After sorting (descending): "<<endl;
   
    // print(array,n);

    // cout<<findMinIndex(array,n,0)<<endl;
}
