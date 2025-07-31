//SHIFATPREET SINGH
//24070123098
//ENTC B1
//ALPHABET LOOP
#include<iostream>
using namespace std ;
int main (){
    int i , j ,n;
    cout<<"Enter the number of rows of alphabet you wnat to print:";
    cin>>n;
    char a='A';
    
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<a<<" ";
        a++;
            
        }
        cout<<endl;
    }
return 0;
}
//OUTPUT
/*
Enter the number of rows of alphabet you wnat to print:6

A
B C
D E F
G H I J
K L M N O
P Q R S T U
*/