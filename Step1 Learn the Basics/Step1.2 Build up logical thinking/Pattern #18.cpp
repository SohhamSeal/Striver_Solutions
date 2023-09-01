#include<bits/stdc++.h>
using namespace std;

/*
E
DE
CDE
BCDE
ABCDE
*/

class Pattern18{
    int n;
    public:
        Pattern18(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=i;j>=1;j--)
                {
                    cout << char('A'+n-j);
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
    Pattern18 *obj=new Pattern18(n);
    obj->display();
    return 0;
}