/* a=cin.get();
here cin.get pick character 
*/


 #include<iostream>
using namespace std;

 /* int main() {
int n,m;
cin>>n>>m;
if(n>m) {
    cout<<"n is greater"<<endl;

}
else {
    cout<<"n is smaller"<<endl;

}
} */

 /*int main() {
    int n;
    cin >> n;
    int i=0;
    int sum =0;
    while(i<=n) {
        sum=sum+i;
        i=i+1;

    }
    cout <<"value of sum is "<<sum<<endl;
} */
 int main() {
    int n;
    cin >> n;
    int  i=1;
    int sum=0;
    while(i<=n) {

        if (i%2==0) {
        sum=sum+i;
        }
        i=i+1;
        

    }
    cout << " sum of all even number is :" <<sum<<endl;
 }




