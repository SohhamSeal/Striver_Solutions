#include<bits/stdc++.h>
using namespace std;

/*
*****
****
***
**
*
*/

class Pattern5{
    int n;
    public:
        Pattern5(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=n;i>=1;i--)
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
    Pattern5 *obj=new Pattern5(n);
    obj->display();
    return 0;
}