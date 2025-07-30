//Shifatpreet Singh
//24070123098
//ENTC B1
#include<iostream>
using namespace std;
int main(){
    int i, j, n ;
    int k=1;
    cout<<"Enter a number:";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<k<<" ";
         k++;   
        }
        
        cout<<endl;
    }
return 0;
}
//OUTPUT
/*
Enter a number:5
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/