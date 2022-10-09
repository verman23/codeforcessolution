#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N[2][2];
        int count = 0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> N[i][j];
                if (N[i][j] == 1)
                    count++;
            }
        }
        if(count==0){
            cout<<"0"<<endl;
        }else if( count==1||count==2||count==3)
        {
            cout<<"1"<<endl;
        }else{
            cout<<"2"<<endl;
        }
        
    }
    return 0;
}