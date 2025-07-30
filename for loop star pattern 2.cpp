//SHIFATPREET SINGH
//24070123098
//ENTC B1
#include<iostream>
using namespace std;
int main(){
    int i ,j ,n;
    cout<<"Enter a number:";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            cout<<"  ";

        }
        for(j=0;j<i+1;j++){
            cout<<" *";
        }
        cout<<endl;

}
 return 0;
}
/*
Enter a number:8
                 *
               * *
             * * *
           * * * *
         * * * * *
       * * * * * *
     * * * * * * *
   * * * * * * * *

   */