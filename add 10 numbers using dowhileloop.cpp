#include<iostream>
using namespace std;
int main()
{
    int i, n, num, sum=0;
    cout<<"enter the 10 numbers:";
    do
    {
        cin>>num;
        sum = sum+num;
        i++;
    }
    while(i<10);
    cout<<"\nSum of 10 numbers are "<<sum;
    cout<<endl;
    return 0;
}
