#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    char temp;  
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a<<b<<endl;
    temp=b[0];
    b[0]=a[0];
    a[0]=temp;
    cout<<a<<" "<<b;
    return 0;
}
