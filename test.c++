#include<iostream>
int f (){

    return 2;
}
int main(){
int x=10;
int **ptr =&&10;


x=f();
// R value got from the func  ثوابت 
// L val pointers / arrays /fucktion
int arr[3]={1,2,3};
int x = arr[2];
    return 0;
}