#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
				double incom;
				double rate;
				while (cin >> incom)
				{
								if (incom < 750)
								{
												rate = incom * 0.01;
								}
								else if (750 <= incom && incom < 2250)
								{
												rate = (incom - 750.0) * 0.02 + 7.5 ;
								}
								else if (2250 <= incom && incom < 3750)
								{
												rate =  (incom - 2250.0) * 0.03 + 37.5 ;
								}
								else if (3750 <= incom && incom < 5250)
								{
												rate = (incom - 3750.0) * 0.04 + 82.5 ;
								}
								else if (5250 <= incom && incom < 7000)
								{
												rate = (incom - 5250.0) * 0.05 + 142.5;
								}
								else
								{
												rate=(incom - 7000.0) * 0.06 + 230.0 ;
								}
								cout << fixed << setprecision(2) << rate << endl;
				}
				return 0;
}	