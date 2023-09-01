#include<bits/stdc++.h>
using namespace std;

/*
1      
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

class Pattern13{
    int n;
    public:
        Pattern13(int a)
        {
            n=a;
        }
        void display()
        {
            int c=1;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=i;j++)
                    cout << c++;
                cout << endl;
            }
        }
};

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    Pattern13 *obj=new Pattern13(n);
    obj->display();
    return 0;
}