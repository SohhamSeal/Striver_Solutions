#include<bits/stdc++.h>
using namespace std;

/*
*****
*****
*****
*****
*****
*/

class Pattern1{
    int n;
    public:
        Pattern1(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
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
    Pattern1 *obj=new Pattern1(n);
    obj->display();
    return 0;
}