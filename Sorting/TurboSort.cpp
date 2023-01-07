#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    cin>>n;
    long int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A,A+n);
    for(int j=0;j<n;j++)
    {
        cout<<A[j]<<endl;
    }
    return 0;
}
