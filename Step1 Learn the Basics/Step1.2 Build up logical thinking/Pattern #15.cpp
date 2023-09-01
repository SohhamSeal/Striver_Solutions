#include<bits/stdc++.h>
using namespace std;

/*
ABCDE 
ABCD
ABC 
AB
A
*/

class Pattern15{
    int n;
    public:
        Pattern15(int a)
        {
            n=a;
        }
        void display()
        {
            char c='A';
            for(int i=n;i>=1;i--)
            {
                for(int j=0;j<i;j++)
                    cout << (char)(j+c);
                cout << endl;
            }
        }
};

int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    Pattern15 *obj=new Pattern15(n);
    obj->display();
    return 0;
}