    #include <iostream>

    using namespace std;

    int main()
    {
        int n;
        cin>>n;
        
        for(int i =0;i<n;i++){
            for(int j=0;j<n-i;j++){
                cout<<" ";
            }
            for(int j=0; j<i+1;j++){
                cout<<("*");
            }
            for(int j=i; j>0;j--){
                cout<<("*");
            }
            
            
            cout<<endl;
        }
        //Lower pyramid
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                cout<<" ";
            }
            for(int j=n-i;j>0;j--){
            cout<<"*"; 
            }
            //only done till 3 parts, put loop for 4th portion
            for(int j = n-i-1;j>0;j--){
            cout<<"*";
            }
            cout<<endl;   
        
        }
        
    }


    


/*----------------------------------------------------------------*/

/*

//solution version 2 improvized by dhattrwal didi

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j = 0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //Lower pyramid
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }
        for(int j=2*(n-i)-1;j>0;j--){
            cout<<"*";
        }
        
     cout<<endl;   
    }
    
}
*/


/*----------------------------------------------------------------*/


/*

//Main solution by dhttrwal didi

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j = 0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //Lower pyramid
    for(int i=n;i>0;i--){
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        for(int j = 0;j< 2*i-1;j++){
            cout<<"*";
        }
        
     cout<<endl;   
    }
    
}
*/