#include<iostream.h>

using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
    
}

void swap(int e, int f){ //we are using void here because this will not return or print any value

int temp = f;
 f = e;
 e = f;
} //this will swap values of to variables

void swapPointer(int *e, int *f){ /*To make this work we will use andress or pointers */

int temp = *f;
 *f = *e;
 *e = temp;
}

void swapReferenceVar(int &e, int &f){ /*To make this work we will use andress or pointers */

int temp = f;
 f = e;
 e = temp;
}

int main(){
int a = 4;
int b = 5;
cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;

cout<<"The value of a before swapping is "<<a<<" The value of b before swapping is "<<b<<endl;
swap(a, b);//This will no work because the swap function will copy the value of variables then work but nothing will change in actual arguments
cout<<"The value of a after swapping is "<<a<<" The value of b after swapping is "<<b<<endl;

swapPointer(&a, &b);//Now this will work because this will change the value via address
cout<<"The value of a after swapping is "<<a<<" The value of b after swapping is "<<b<<endl;
//calling by refernce varriable
swapReferenceVar(a, b);//Now this will work because this will change the value via address
cout<<"The value of a after swapping is "<<a<<" The value of b after swapping is "<<b<<endl;
return 0;
}
