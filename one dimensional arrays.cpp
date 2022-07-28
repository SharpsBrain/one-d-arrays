#include <iostream>

using namespace std;

int main()
{
    //array declaration and initialization:
   /* int num1[10]={1,2,3,4,5,6,7,8,9,10};
    int num2[]={2,3,4,6,8};
    //printing the values:
    cout<<"First value in num1:\t"<<num1[0];
    cout<<"Last value in num1:\t"<<num1[9];
    cout<<"First value of num2:\t"<<num2[0];
    cout<<"Last value of num2:\t"<<num2[4];
    num1[5]=11;//update an array
    cout<<"\n6th element in num1:\t"<<num1[5];
    */
    int a[10],i;
    cout<<"Enter 10 numbers\n:";
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"Listing of even numbers:";
    for(i=0;i<10;i++){
        if(a[i]%2==0){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
