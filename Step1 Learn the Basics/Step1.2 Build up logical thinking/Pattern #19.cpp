#include<bits/stdc++.h>
using namespace std;

/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

class Pattern19{
    int n;
    public:
        Pattern19(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=n;i>=1;i--)
            {
                for(int j=1;j<=i;j++)
                    cout << "*";
                for(int j=1;j<=(n-i)*2;j++)
                    cout << " ";
                for(int j=1;j<=i;j++)
                    cout << "*";
                cout << endl;
            }
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                    cout << "*";
                for(int j=1;j<=(n-i)*2;j++)
                    cout << " ";
                for(int j=1;j<=i;j++)
                    cout << "*";
                cout << endl;
            }
        }
};

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    Pattern19 *obj=new Pattern19(n);
    obj->display();
    return 0;
}