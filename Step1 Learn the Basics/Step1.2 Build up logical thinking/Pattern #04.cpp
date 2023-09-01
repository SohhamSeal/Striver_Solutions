#include<bits/stdc++.h>
using namespace std;

/*
1
22
333
4444
55555
*/

class Pattern4{
    int n;
    public:
        Pattern4(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                    cout << i;
                cout << endl;
            }
        }
};

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    Pattern4 *obj=new Pattern4(n);
    obj->display();
    return 0;
}