#include<bits/stdc++.h>
using namespace std;

/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

class Pattern22{
    int n;
    public:
        Pattern22(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=2*n-1;j++)
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
    Pattern22 *obj=new Pattern22(n);
    obj->display();
    return 0;
}