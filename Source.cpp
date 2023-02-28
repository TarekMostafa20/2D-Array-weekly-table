/*= { {8,12,9,7,10}, {5,7,3,0,4}

   ,{20,15,18,21,14}		,	{6,9,5,8,11}


	};*/
#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main() {
	int sum =0 ,min,max,big = 0;


	int bus[4][5];

	cout << "\nday 1: "<<endl;
	
	
	
	for (int i = 0; i <5 ; i++)
	{
		for (int j = 0; j <4 ; j++)
		{
			cout << "enter number "<<j+1<<": ";
			cin >> bus[j][i];
			

		}
		cout << "\nday " << i + 2 << " : ";
		cout << endl;


	}
	cout <<setw(6) << "Mon" << setw(6) << "Tue" << setw(6) << "Wed" << setw(6)  <<setw(6) <<"Thr" <<setw(6) << "Fri\n";
	

	for (int i = 0; i <4; i++)
	{
		for (int j = 0; j <5 ; j++)
		{

			cout <<setw(5) << bus[i][j] << " ";

		}

		cout << endl;


}


	//a
	
			cout << "the number of passengers for day 1: " << bus[0][0] << " " << bus[1][0] << " " << bus[2][0] << " " << bus[3][0] << endl;

			cout << "the number of passengers for day 2: " << bus[0][1]<<" " << bus[1][1] << " " << bus[2][1] << " " << bus[3][2] << endl;
		//b

			cout << "the total passengers for Mon: " << bus[0][0] + bus[1][0] + bus[2][0] + bus[3][0]<<endl;

			//c

		

			//d
			cout << "the total number of passengers for the route stored in row 0: " << bus[0][0] + bus[0][1] + bus[0][2] + bus[0][3] + bus[0][4]<<endl;

		
		//e
			
			int	maxbus[1][5] = { bus[3][0],bus[3][1],bus[3][2],bus[3][3],bus[3][4] };

			
		
			for (int i = 0; i < 4; i++)
				{
					for (int j = 0; j < 5; j++)
						{
						if (maxbus[i][j] >= maxbus[0][0])
						{
							max = maxbus[i][j];
						}
					


					}
					cout << endl;
			}
			cout << "Max: " << max << endl;
			
	int	minbus[1][5] = { bus[3][0],bus[3][1],bus[3][2],bus[3][3],bus[3][4] };
							
		
			//f

			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					
					if (minbus[i][j] <= minbus[0][0])
					{
						min = minbus[i][j];
					}


				}
				
			}
		
			cout << "Min: " << min << endl;
							

			
		//g

			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					sum += bus[i][j];
					


				}

			}
		
			float	average = (float)sum / 20;
			cout << "Average = " << average;

		

			//h
			for (int i = 0; i < 4; ++i)
				for (int j = 0; j < 5; ++j)
				{
					if (bus[i][j] > big)
						big = bus[i][j];
				}

			cout << "\nLargest number:" << big<<endl;
		
	return 0;

}