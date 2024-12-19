/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
//enumerated data type for the three different lights
enum LightState {RED, YELLOW, GREEN};

int main()
{
	LightState lightAhead[3];
//variabel to find first red
	int firstRed = -1;

	int seed = time(0);
	srand(seed);
//generates random light for the three lights
	for (int i = 0 ; i < 3  ; i++)
	{
		lightAhead[i] = static_cast<LightState>((rand()%(GREEN - RED + 1)) + RED);
	}

	cout <<"The three traffic lights are: ";
//outputs lights
	for (int i = 0; i < 3 ; i++)


	{
		switch (lightAhead[i])
		{
		case RED:
			cout <<" RED ,";
			if (firstRed == -1)
			{
				firstRed = (i + 1);
			}

			break;

		case YELLOW:
			cout <<" YELLOW ,";
			break;

		case GREEN:
			cout <<" GREEN ,";
			break;
		}
	}
//finds if there is a red light and tells user where to stop if there is
	if (firstRed == -1)
	{
		cout <<" You can keep driving all the way."<<endl;
	}
	else
		cout <<"You need to stop at traffic light "<<firstRed;

	return 0;
}

