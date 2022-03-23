#include<iostream>
using namespace std;
 
int main()
{
   
    int x[2][2] = {{0,1}, {2,3}};
    int y[2][2] = {{0,1}, {2,3}};
    int s[2][2] = {};
  
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            s[i][j]= x[i][j]+y[i][j];
            
        }
    }
      for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j]<<endl;
        }
    }
      for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << y[i][j]<<endl;
        }
    }
      for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Element at x[" << i
                 << "][" << j << "]: ";
            cout << s[i][j]<<endl;
        }
    }
    
 
    return 0;
}
