#include<bits/stdc++.h>
using namespace std;

/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

class Pattern9{
    int n;
    public:
        Pattern9(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=n;i>=1;i--)
            {
                for(int j=1;j<=i;j++)
                    cout << " ";
                for(int j=1;j<=2*(n-i+1)-1;j++)
                    cout << "*";
                cout << endl;
            }
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
    Pattern9 *obj=new Pattern9(n);
    obj->display();
    return 0;
}