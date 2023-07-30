#include<iostream>
using namespace std;

int findMinIndex(int array[], int n, int start){
    int min=array[start];
    int index=start;
    for(int i=start;i<n;i++){
        if(array[i]<min){
            min=array[i];
            index=i;
        }
    }
    return index;
}

int findMaxIndex(int array[], int n, int start){
    int max=array[start];
    int index=start;

    for(int i=start;i<n;i++){
        if(array[i]>max){
            max=array[i];
            index=i;
        }
    }
    return index;
}

void ascendingSelection(int array[], int n){
    for(int i=0;i<n;i++){
        int minIndex=findMinIndex(array,n,i);
        swap(array[i],array[minIndex]);
    }
}

void descendingSelection(int array[], int n){
    for(int i=0;i<n-1;i++){
        int maxIndex=findMaxIndex(array,n,i);
        swap(array[i],array[maxIndex]);
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
    ascendingSelection(array,n);
    print(array,n);
    
    cout<<"\n"<<endl;
    
    cout<<"After sorting (descending): "<<endl;
    descendingSelection(array,n);
    print(array,n);

    // cout<<findMinIndex(array,n,0)<<endl;
}
