#include<bits/stdc++.h>
using namespace std;

/*
*
**
***
****
*****
****
***
**
*
*/

class Pattern10{
    int n;
    public:
        Pattern10(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                    cout << "*";
                cout << endl;
            }
            for(int i=n-1;i>=1;i--)
            {
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
    Pattern10 *obj=new Pattern10(n);
    obj->display();
    return 0;
}