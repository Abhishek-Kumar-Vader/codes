#include<iostream>
using namespace std;

int main()
{
    int a[5],index;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    cout<<"enter the index number to be deleted: ";
    cin>>index;
    a[index]=0;
    for(int i=index;i<5;i++){
        int temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }

    int arr[4];

    for(int i=0;i<4;i++){
        arr[i]=a[i];
    }

    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}