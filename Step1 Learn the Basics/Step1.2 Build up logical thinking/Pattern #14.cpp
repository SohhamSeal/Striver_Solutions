#include<bits/stdc++.h>
using namespace std;

/*
A
AB
ABC 
ABCD
ABCDE 
*/

class Pattern14{
    int n;
    public:
        Pattern14(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=0;j<i;j++)
                    cout << (char)(j+'A');
                cout << endl;
            }
        }
};

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    Pattern14 *obj=new Pattern14(n);
    obj->display();
    return 0;
}