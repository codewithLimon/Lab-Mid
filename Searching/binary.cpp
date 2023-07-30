#include<iostream>
#include<string>
using namespace std;

int binarySearch(string str, char element){
    int l=0;
    int r=str.length()-1;

    while(l<=r){
        int mid=(l+r)/2;

        if(str[mid]==element){
            return mid; //found at index #
        }else if(str[mid]>element){
            r=mid-1;
        }else l=mid+1;
    }

    return -1; //not found
    
}
int main(){
    string str="abcdefghijklmnopqrstuvwxyz";

    cout<<binarySearch(str,'z')<<endl;
}