#include<bits/stdc++.h>
using namespace std;

/*
1        1
12      21
123    321
1234  4321
1234554321
*/

class Pattern12{
    int n;
    public:
        Pattern12(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                    cout << j;
                for(int j=1;j<=2*(n-i);j++)
                    cout << " ";
                for(int j=i;j>=1;j--)
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
    Pattern12 *obj=new Pattern12(n);
    obj->display();
    return 0;
}