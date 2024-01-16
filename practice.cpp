#include<iostream>
using namespace std;

//for cube

int cube(int a)
{   int ans =1;
     for(int i=0; i<3;i++)
     {
         ans=ans*a;
     }
     return ans;
}

int main()
{
    int a,b=5;
    cout<<"Enter the value a "<<endl;
    cin>>a;

  int answer= cube(a);
    cout<<"answer of A "<<answer<<endl;
    cout<<"answer of B "<<cube(b)<<endl;
}
