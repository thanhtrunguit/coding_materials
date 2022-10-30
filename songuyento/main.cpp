#include <iostream>
using namespace std;
int main() {
    int n;
    int a;
    a = 1;
    cout << "nhap n:" << endl;
    cin >> n;
    cout << "so da nhap la:" << n << endl;

    if ( a>= n)
    {
        cout << "false";
    }
    else
    {
        a = a + 1;
        if(a<n)
        {
             if(n%a==0){cout << "false";}
             else {}

        }
    }


}
