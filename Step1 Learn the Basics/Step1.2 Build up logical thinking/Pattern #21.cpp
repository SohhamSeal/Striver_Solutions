#include<bits/stdc++.h>
using namespace std;

/*
**********
*        *
*        *
*        *
**********
*/

class Pattern21{
    int n;
    public:
        Pattern21(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=2*n;j++)
                {
                    if(j==1 || j==2*n)
                        cout << "*";
                    else if(i==1 || i==n)
                        cout << "*";
                    else 
                        cout << " ";
                }
                cout << endl;
            }
        }
};

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    Pattern21 *obj=new Pattern21(n);
    obj->display();
    return 0;
}