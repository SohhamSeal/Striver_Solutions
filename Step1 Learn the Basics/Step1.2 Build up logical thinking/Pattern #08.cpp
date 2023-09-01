#include<bits/stdc++.h>
using namespace std;

/*
*********
 *******
  *****
   ***
    *
*/

class Pattern8{
    int n;
    public:
        Pattern8(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                    cout << " ";
                for(int j=1;j<=2*(n-i+1)-1;j++)
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
    Pattern8 *obj=new Pattern8(n);
    obj->display();
    return 0;
}