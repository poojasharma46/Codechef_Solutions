#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long int minX,maxX,odd=0,even=0;
        cin>>n>>minX>>maxX;
        long long int w[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>w[i]>>b[i];
        }
        long long int x;
        x=maxX-minX+1;
        if((maxX-minX)%2==0)
        {
            if(minX%2==0)
            {
                even=x/2+1;
                odd=x/2;
            }
            else
            {
                even=x/2;
                odd=x/2+1;
            }
        }
        else
        {
            odd=x/2;
            even=x/2;
        }
        for(int i=0;i<n;i++)
        {
            if(w[i]%2==0)
            {
                even+=odd;
                odd=0;

            }
            if(b[i]%2!=0)
            {
                int temp;
                temp=odd;
                odd=even;
                even=temp;
            }
       }
        cout<<even<<" "<<odd<<endl;
    }
}
