#include<bits/stdc++.h>
using namespace std;

/*
A 
BB
CCC 
DDDD
EEEEE
*/

class Pattern16{
    int n;
    public:
        Pattern16(int a)
        {
            n=a;
        }
        void display()
        {
            char c='A';
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                    cout << (char)(i+c-1);
                cout << endl;
            }
        }
};

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    Pattern16 *obj=new Pattern16(n);
    obj->display();
    return 0;
}