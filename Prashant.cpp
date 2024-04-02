#include<iostream>
using namespace std; 
int main() 
{

    int n ,a ; 
    cout << "Enter the Size :" <<endl ;
    cin >> n ;
    a = n/2+1;

    for (int  i = 1; i <=n ; i++)
    {
        for(int j = 1 ; j <=n ; j++)  // P Alphabate  
        {
            if ( j==1 || i == a && j != n  || i ==1 && j!= n  || j ==n && ( i>1 && i <a ) )
            {
                cout<< "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << " ";

        for(int j = 1 ; j <=n ; j++)  // R Letter 
        {
            if ( j==1 || i == a && j != n  || i ==1 && j!= n  || j ==n && ( i>1 && i <a ) || i> a && i == j  )
            {
                cout<< "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << ' ';

        for(int j = 1 ; j <=n ; j++) // A Letter 
        {
            if ( i >= a && (j==1 || j==n ) || j<= a && i+j == a+1 || j>= a && j-i == a-1  || a== i  )
            {
                cout<< "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << " ";

        for(int j = 1 ; j <=n ; j++) // S Letter 
        {
            if ( j>1&& i == 1 || i == a && j>1 && j!=n || j<n && i ==n || j == 1 && ( i < a && i> 1 )  || j == n && ( i>a && i<n))
            {
                cout<< "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << " ";
        
        for(int j = 1 ; j <=n ; j++)  // H Letter 
        {
            if ( i == a ||  j== 1 || j==n )
            {
                cout<< "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << " ";
        
        for(int j = 1 ; j <=n ; j++) // A Letter 
        {
            if ( i >= a && (j==1 || j==n ) || j<= a && i+j == a+1 || j>= a && j-i == a-1  || a== i  )
            {
                cout<< "*";
            }
            else
            {
                cout << " ";
            }
        }
        
        cout << " ";
        
        for(int j = 1 ; j <=n ; j++)  // N Letter 
        {
            if ( j== 1 || j==n || i==j   )
            {
                cout<< "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << " ";
        
        for(int j = 1 ; j <=n ; j++)  // T Letter 
        {
            if (  a == j || i == 1  )
            {
                cout<< "*";
            }
            else
            {
                cout << " ";
            }
        }
        
        cout << endl;
    }
    
    return  0;
} 