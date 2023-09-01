#include<bits/stdc++.h>
using namespace std;

/*
        A 
       ABA
      ABCBA 
     ABCDCBA
    ABCDEDCBA
*/

class Pattern17{
    int n;
    public:
        Pattern17(int a)
        {
            n=a;
        }
        void display()
        {
            for(int i=1;i<=n;i++)
            {
                int c=0;
                for(int j=1;j<=n-i;j++)
                    cout << " ";
                for(int j=1;j<=2*i-1;j++)
                {
                    cout << char('A'+c);
                    if(j<i)
                        c++;
                    else    
                        c--;
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
    Pattern17 *obj=new Pattern17(n);
    obj->display();
    return 0;
}