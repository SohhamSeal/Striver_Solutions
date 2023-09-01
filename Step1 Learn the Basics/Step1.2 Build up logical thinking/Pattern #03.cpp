#include<bits/stdc++.h>
using namespace std;

/*
1
12
123
1234
12345
*/

class Pattern3{
    int n;
    public:
        Pattern3(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=1;i<=n;i++)
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
    Pattern3 *obj=new Pattern3(n);
    obj->display();
    return 0;
}