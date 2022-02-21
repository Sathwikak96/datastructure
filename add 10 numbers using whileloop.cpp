#include<iostream>
using namespace std;
int main()
{
    int i, n, num, sum=0;
    cout<<"How many numbers you want to enter ? ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    while(i<n)
    {
        cin>>num;
        sum = sum+num;
        i++;
    }
    cout<<"\nSum of all "<<n<<" numbers is "<<sum;
    cout<<endl;
    return 0;
}
