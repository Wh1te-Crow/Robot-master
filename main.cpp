#include "module.h"

int main() 
{
	HANDLE hOUTPUT = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hOUTPUT,FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE );
	Toy robot;
	BP panel;
	panel.sync_position(robot);
	cout<<"<---------YOUR ROBOT START POSITION--------->: ";
	cout<<"("<<robot.position[0]<<";"<<robot.position[1]<<";"<<robot.position[2]<<")"<<endl;
	int On=1;
	int Selection;
	int way[3];


	cout<<"<---------START OF PROGRAM--------->"<<endl;
	while (On)
	{
		
		cout<<"Do you want to change the backlight True(1) False(0): ";
		cin>>Selection;
		if (Selection)
		panel.changeColor(robot);
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
	cout<<"<---------END OF PROGRAM--------->"<<endl;
	system("pause");
	return 0;
}
