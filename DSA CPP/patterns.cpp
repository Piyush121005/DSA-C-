#include <iostream>
using namespace std;
// Pattern in CPP

int main()
{

    // Pattern 1: Square Star Pattern

    /*
     int n;
     cout<<"Enter the value of rows"<<endl;
     cin>>n;
     for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
             cout<<"* ";
         }
         cout<<endl;
     }
     */

    // Pattern 2: Square Number Pattern 1

    /*
    int n;
    cout << "Enter the value of rows" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i + 1<<" ";
        }
        cout << endl;
    }
    */

    // Pattern 3: Square Number Pattern 2

    /*
        int n;
        cout << "Enter the value of rows" << endl;
        cin >> n;
        int i = 0;
        while(i!=n){
        int j = 0;
            while(j!=n){
                cout<<j+1<<" ";
                j++;
            }
            i++;
            cout<<endl;
        }
        */

    // Pattern 4: Square Number pattern 3

    /*
     int n;
     cout << "Enter the value of rows" << endl;
     cin >> n;
     int i=0;
     int count = 0;

     while(i!=n){
     int j=0;

     while(j!=n){
         count++;
         cout<<count<<" ";
         j++;
     }
    
     i++;
     cout<<endl;
     }
    */ 

    // Pattern 5: Star Right Angle triangle
    
    /*
    int n;
    cout << "Enter the value of rows" << endl;
     cin >> n;
     int i=1;
     while(i!=n+1){
         int j = 0;
         while(j!=i){
             cout<<"* ";
             j++;
         }
         i++;
         cout<<endl;
     }
    */

    // Pattern 6: Right Angle Triangle Number 1

    /*
    int n;
    cout << "Enter the value of rows" << endl;
     cin >> n;
     int i=1;
     while(i!=n+1){
         int j = 0;
         while(j!=i){
             cout<<i<<" ";
             j++;
         }
         i++;
         cout<<endl;
     }
    */  

    // Pattern 7: Right Angle Triangle Number 2
    
    /*
    int n;
    cout<<"Enter the value of rows ";
    cin>>n;
    int i = 1;
    int count = 0;
    while(i!=n+1){
    int j = 0;
     while(j!=i){
         count++;
         cout<<count<<" ";
         j++;
     }
     cout<<endl;
     i++;
    }
    */

    // Pattern 8: Right Angle Triangle Number 3
    
    /*
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    int i = 1;
    int x = 0;
    while(i!=n+1){
      int j = 0;
          x = i;
      while(j!=i){
          cout<<x<<" ";
          x++;
          j++;
      }
      i++;
      cout<<endl;
    }
    */

    // Pattern 9: Right Angle Triangle Number 4
    
    /*
    int n;
    cout << "Enter the number of rows ";
    cin >> n;
    int i = 1;
    int x;
    while (i != n + 1)
    {
        int j = 0;
        x = i;
        while (j != i)
        {
            cout << x << " ";
            x--;
            j++;
        }
        i++;
        cout << endl;
    }
    */

    // Pattern 10: Square Alphabets 1

    /*
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    char a = 65;
    int i=0;
    while(i!=n){
    int j = 0;
    while(j!=n){
    cout<<a<<" ";
    j++;
    }
    i++;
    a++;
    cout<<endl;
    }
    */
    

    // Pattern 11: Square Alphabet 2
    
    /*
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    char a = 65;
    int i=0;
    while(i!=n){
    int j = 0;
        while(j!=n){
        cout<<a<<" ";
        j++;
        a++;
        }
        i++;
        cout<<endl;
    }
    */

    // Pattern 12: Square Alphabet3
    
    /*
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    char a = 65;
    int i = 0;
    while(i!=n){
    char count = a;
    int j = 0;
    while(j!=n){
        cout<<count<<" ";
        count++;
        j++;
    }
    cout<<endl;
    a++;
    i++;
    }
    */

    // Pattern 13 Triangular Alphabet 1
    
    /*
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    char a = 65;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < i; j++)
            cout << a << " ";
        
        a++;
        cout << endl;
    }
    */

    // Same problem with different approach

    /*
        int n;
        cout << "Enter the value of n: " << endl;
        cin >> n;
        for (int i = 1; i < n+1; i++)
        {
            for (int j = 0; j < i; j++)
            {
                char ch = 'A'+i-1;
                cout<<ch<<" ";
            }
            cout << endl;
        }
    */


    // Pattern 14: Triangular Alphabet 2

    /*
        int n;
        cout << "Enter the value of n: " << endl;
        cin >> n;
        char a = 65;
        int i = 1;
        while(i!= n+1){
            int j = 0;
            while(j!= i){
                cout<<a<<" ";
                a++;
                j++;
            }
            cout<<endl;
            i++;
        }
    */

    // Pattern 15: Triangular Alphabet 3

        /*
        int n;
        cout << "Enter the value of n: " << endl;
        cin >> n;
        for (int i = 1; i < n + 1; i++)
        {
            char ch = 'A' + n -i;
            
            for (int j = 0; j < i; j++)
            {
                
                cout << ch << " ";
                ch++;
            }
            cout << endl;
        }
        */

    // Pattern 16: Square Alphabet 4
    
        /*
        int n;
        cout << "Enter the value of n: " << endl;
        cin >> n;
        int i = 0;
        while(i!=n){
                char c = 65+i;
            int j = 0;
            while(j!=n){
                cout<<c<<" ";
                c++;
                j++;
            }
            cout<<endl;
            i++;
        }
        */  

    // Pattern 17: Star space-triangle 1

    /*
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int i=1;
    while(i!=n+1){
    int j= 1;
    while(j<=n-i){
        cout<<" ";
        j++;
    }
    int k = 1;
        while(k<=i){
        cout<<"*";
        k++;
    }
    cout<<endl;
    i++;
    }
    */


    // Pattern 18: Star space-triangle 2

    /*
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int i=0;
    while(i!=n){
        int j=n;
        while(j!=n-i){
            cout<<" ";
            j--;
        }
        int k=n;
        while(k!=i){
            cout<<"*";
            k--;
        }
        i++;
        cout<<endl;
    }
    */

    /*
    //Approach 2 for same problem above

        int n;
        cout << "Enter the value of n: " << endl;
        cin >> n;
        int i = 0;
        while(i<n){
            int star = n-i;
            int space = n-star;
            while(space>0){
                cout<<" ";
                space--;
            }
            while(star>0){
                cout<<"*";
                star--;
            }
            cout<<endl;
            i++;
        }
    */


    // Pattern 19: space-triangle row number 1
    
    /*
        int n;
        cout << "Enter the value of n: " << endl;
        cin >> n;
        int i = 0;
        while(i!=n){
            int j =0;
            while(j!=n-i-1){
                cout<<" ";
                j++;
            }
            int k=0;
            while(k!=i+1){
                cout<<k;
                k++;
            }
            cout<<endl;
            i++;
        }
    */

    // Pattern 20: Space Triangle row number 2

    /*
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int i=0;
    while(i!=n){
        int j = n;
        while(j!=n-i){
            cout<<" ";
            j--;
        }
        int k= n;
    while(k!=i){
        cout<<i;
        k--;
    }
    cout<<endl;
    i++;
    }
    */
   
    // Bonus
    
        int n;
        cout << "Enter the value of n: " << endl;
        cin >> n;
        int i = 0;
        while(i!=n){
            int j =0;
            while(j!=n-i-1){
                cout<<" ";
                j++;
            }
            int k=0;
            while(k!=i+1){
                cout<<k;
                k++;
            }
            int l = 0;
            while(l!=i){
                cout<<l;
                l++;
            }
            cout<<endl;
            i++;
        }

            
return 0;
}
