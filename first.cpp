#include <iostream>
using namespace std;

int main(){

    // ---------------- Pattern

    /*
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
    */

    /*
    int n, second, third;
    cin>>n;
    for (int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        second = i;
        second = 2*second-2;
        while(second){
            cout<<"* ";
            second--;
        }
        third = n-i+1;
        while(third){
            cout<<third<<" ";
            third--;
        }
        cout<<endl;
    }
    */

    /*
            1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1

    */
    /*
    int n, space, content;
    cin>>n;
    
    for (int i =1; i<=n; i++){
        space = n;
        while(space-i>0){
            cout<<"  ";
            space--;
        }
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        content = i-1;
        while(content){
            cout<<content<<" ";
            content--;
        }
        cout<<endl;
    }
    */


    /*
    D
    C D
    B C D
    A B C D
    */ 

    /* // One Way
    int n;
    cin>>n;
    for (int i =1; i<=n; i++){
        for (int j =1; j<=i; j++){
            int k = 0;
            char ch = 'D'-i+j+k;
            cout<<ch;
            k++;
           
        }
        cout<<endl;
    }
    */

    /* // Second Way
    int n;
    cin>>n;
    for (int i =1; i<=n; i++){
        for (int j =1; j<=i; j++){
            int k = 0;
            char ch = 'A'+n-i+j-1;
            cout<<ch;
            k++;
           
        }
        cout<<endl;
    }
    */

    
    // --------------- Prime No

    /*
    int n, c=2, f;
    cin>>n;
    while(c<n){
        if(n%c==0){
        f = 0;
        break; 
        }
        else
        f = 1;
        c++;
    }
    if(f==1)
    cout<<"Prime no";
    else 
    cout<<"Not Prime no";
    */


    // --------------- Sum of N even no.
    /*
    int n, sum = 0;
    cin>>n;
    while(n>0){
        if(n%2==0){
        sum += n;
        n -= 2;
        }
    }
    cout<<"The sum of N even no is "<<sum<<endl;
    */


    // ----------------- cin doesn't reads space, tab and enter in the terminal
    /*
    int a;
    a = cin.get()  ;
    cout<<a; // now we get output for ASCII equivalent of tab, space and enter
    */


    // ----------------- Type Conversion
    /*
    int a = 'a';
    cout<<a<<endl;  //97
    char ch = 98;
    cout<<ch<<endl;  //B
    char ch1 = 123456;
    cout<<ch1<<endl;  //@
    // 11110001001000000 binary equivalent of 123456, so since char has only one
    // byte, it will try to convert last byte of integer into char, so last byte in 
    // 11110001001000000 is 010000000 which equals to 64, and 64 denotes @ in ASCII.
    */


}