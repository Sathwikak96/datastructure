#include<iostream>
using namespace std;
int main()
{
    int i=0, n, num, sum=0;
    cout<<"enter the 10 numbers:"<<endl;
    do
    {
        cin>>n;
        sum = sum+n;
        i++;
    }
    while(i<10);
    cout<<"sum of 10 numbers are:"<<sum<<endl;
    return 0;
}
