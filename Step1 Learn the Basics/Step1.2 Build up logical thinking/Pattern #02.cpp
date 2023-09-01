#include<bits/stdc++.h>
using namespace std;

/*
*
**
***
****
*****
*/

class Pattern2{
    int n;
    public:
        Pattern2(int a)
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
        }
};

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    Pattern2 *obj=new Pattern2(n);
    obj->display();
    return 0;
}