#include<bits/stdc++.h>
using namespace std;

/*
1
01
101
0101
10101
*/

class Pattern11{
    int n;
    public:
        Pattern11(int a)
        {
            n=a;
        }
        void display()
        {
            int c=0,b;
            for(int i=1;i<=n;i++)
            {
                c=(c+1)%2;
                for(int j=1;j<=i;j++)
                {
                    if(j==1) b=c;
                    cout << b;
                    b=(b+1)%2;;
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
    Pattern11 *obj=new Pattern11(n);
    obj->display();
    return 0;
}