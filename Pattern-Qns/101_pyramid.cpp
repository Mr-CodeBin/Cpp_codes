//dhattrwal placement course video (4.2)

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i =1;i<=n;i++){
        for (int j=1; j<=i;j++){
            if( (i+j) % 2 == 0){
                //even
                cout<<"1";
            }
            else{
                //odd
                cout<<"0";
            }
        }cout<<endl;
    }
    
}

