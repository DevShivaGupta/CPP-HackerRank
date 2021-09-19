#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,a[5000],i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=n;i>=1;i--)
        cout<<a[i]<<" ";    
    return 0;
}

