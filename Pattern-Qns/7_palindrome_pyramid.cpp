#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i =1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<" "<<j;
        }
        for (int j=2; j<=i; j++)
        {
            cout<<" "<<j;
        }
        cout<<endl;
    }
    
}



/*-----------------------------------------------------------------*/

/*

// solved by dhattrwl DIDI


#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i =0;i<n;i++){
        int j;
        for(j=0; j< n-i-1;j++){
            cout<<" ";
        }
        int k = i;
        for(;j<n;j++){
            cout<<((k--)+1);
        }
        k=1;
        for(;j<n+i;j++){
            cout<<((k++)+1);
        }
        cout<<endl;
    }
    
}


*/
/*-----------------------------------------------------------------*/

/*

Medium level Code (By aviral)

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i =0;i<n;i++){
        int flag =0;
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=i;j<i+1; ){
            cout<<j+1;
            if(j==0){
                flag=1;
            }
            if(!flag){
                j--;
            }else{
                j++;
            }
        }
        cout<<endl;
    }
    
}

*/

