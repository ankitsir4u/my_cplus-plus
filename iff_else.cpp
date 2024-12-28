/* how many even and odd number between 1 to 100 */
#include<iostream>
using namespace std;
int main()
{
    int b=2,x,count=0;
   // cout<<"enter the value of a"<<endl;
   // cin>>a;
    cout<<"enter the  number upto which you want to check  odd and even ";
    cin>>x;
    for (int i=1;i<=x;i++)
    if(i%b==0) {
        cout<<"even number>-"<<i<<endl;
        
    }
else {
    cout<<"odd number>-"<<i<<endl;
}
}