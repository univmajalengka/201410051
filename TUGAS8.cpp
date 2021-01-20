#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "MEMBENTUK SETENGAH PIRAMID 5 BARIS \n";
    cout << "STRUKTUR DASAR ALGORITMA REPETIION \n";
    cout << endl;
    c=5;
    
    for (a = 1; a <= c; a++)
    {
    	for (b = 1; b <= a; b++)
    	{
    		cout << "* ";
		}
		cout << "\n";
	}
	return 0;
}

