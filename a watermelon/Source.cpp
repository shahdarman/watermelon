#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
int main()
{
	int w;
	cin >> w ;
    if (  1<= w && w <=100)
	{
		if (w % 2 == 0 && w != 2)
		{
			cout << "yes" << "\n";
		}
		else
		{
			cout << " no" << "\n";
		}

	}else 
		cout << " no" << "\n";

	
     return 0;


}