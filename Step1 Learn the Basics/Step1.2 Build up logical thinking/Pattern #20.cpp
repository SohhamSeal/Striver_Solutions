#include<bits/stdc++.h>
using namespace std;

/*
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/

class Pattern20{
    int n;
    public:
        Pattern20(int a)
        {
            n=a;
        }
        void display()
        {
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
            for(int i=n-1;i>=1;i--)
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
    Pattern20 *obj=new Pattern20(n);
    obj->display();
    return 0;
}