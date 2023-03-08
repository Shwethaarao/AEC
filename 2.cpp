#include <iostream>
using namespace std;

int main() 
{
    int T = 0;
    cin >> T;
    while(T--)
    {
        int M = 0, H = 0;
        cin >> M >> H;
        int bmi = (M / (H * H));
        if(bmi <= 18)
            cout << 1 << endl;
        else if(bmi >= 19 and bmi <= 24)
            cout << 2 << endl;
        else if(bmi >= 25 and bmi <= 29)
            cout << 3 << endl;
        else
            cout << 4 << endl;
    }
	return 0;
}