#include <iostream>
using namespace std;

void TowerOfHanoi(int n,char src,char dest,char helper)
{
    //base case
    if(n==0)
    {
        return;
    }
    TowerOfHanoi(n-1,src,helper,dest);
    
    cout<<"Move disk "<<src<<" to disk "<<dest<<endl;
    
    TowerOfHanoi(n-1,helper,dest,src);
}
int main()
{
    int n;
    cin>>n;
    
    TowerOfHanoi(n,'A','B','C');
    return 0;
}
