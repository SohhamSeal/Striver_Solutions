#include<bits/stdc++.h>
using namespace std;

/*
    *
   ***
  *****
 *******
*********
*/

class Pattern7{
    int n;
    public:
        Pattern7(int a)
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
        }
};

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    Pattern7 *obj=new Pattern7(n);
    obj->display();
    return 0;
}