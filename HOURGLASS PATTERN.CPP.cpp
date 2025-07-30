//SHIFATPREET SINGH 
//24070123098
//ENTC B1
//HOURCLASS PATTERN
#include<iostream>
using namespace std;
int main(){
    int i ,j ,k;
    
    for(i=1;i<8;i++){
        for(k=1;k<i;k++){
            cout<<" ";
        }
        for(j=1;j<9-i;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    for(i=1;i<7;i++)  {
        for(j=1;j<7-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i+1;j++){
        cout<<" *";
    }
    
        cout<<endl;
    }

}
//OUTPUT
/*
 * * * * * * * 
  * * * * * *
   * * * * *
    * * * *
     * * *
      * *
       *
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * *
*/