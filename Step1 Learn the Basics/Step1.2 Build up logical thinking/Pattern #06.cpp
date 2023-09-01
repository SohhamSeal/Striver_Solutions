#include<bits/stdc++.h>
using namespace std;

/*
12345
1234
123
12
1
*/

class Pattern6{
    int n;
    public:
        Pattern6(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=n;i>=1;i--)
            {
                for(int j=1;j<=i;j++)
                    cout << j;
                cout << endl;
            }
        }
};

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    Pattern6 *obj=new Pattern6(n);
    obj->display();
    return 0;
}