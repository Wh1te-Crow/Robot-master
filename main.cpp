#include "module.h"

int main() 
{
	Toy robot;
	BP panel;
	panel.sync_position(robot);
	cout<<"("<<robot.position[0]<<";"<<robot.position[1]<<";"<<robot.position[2]<<")"<<endl;
	int On=1;
	int Selection;
	int way[3];
	
	while (On)
	{
		cout<<"Enter destination coordinates: "<<endl;
		cin>>way[0]>>way[1]>>way[2];
		panel.GoToPosotion(way[0],way[1],way[2],robot);
		cout<<"Choose robot's future Exit(0),Return(1): ";
		cin>>Selection;
		switch (Selection)
		{
			case 1: On=1; break;
			case 0: On=0; break;
			
		}
		
	}
	//system("pause");
	return 0;
}
