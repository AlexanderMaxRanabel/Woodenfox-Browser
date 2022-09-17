#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{

    string we="Use Firefox";
    cout<<"please write 91 or you will face consuquences"<<endl;
	int need;
    cin>>need;
    
    if(need!=91)
    cout<<"Can you write 91 next time"<<endl;

    while(need==91)
    cout<<we<<endl;
    return 0;

}
