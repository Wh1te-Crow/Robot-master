#include <iostream>
#include <math.h>
#include <string>
#include <conio.h>
#include <windows.h>


using namespace std;

class Button_Position
{	
public:
int PX=0;
int PY=0;
int PZ=0;
virtual void add_position()=0;
virtual void sup_position()=0;
};
class Toy
{
public:
int position[3];
string color;
};
class BX: public Button_Position
{	
public:	
	void add_position();
	void sup_position();
};
class BY: public Button_Position
{
public:	
	void add_position();
	void sup_position();
};

class BZ: public Button_Position
{
public:	
	void add_position();
	void sup_position();	
};
class BP
{
private:
	BX x0;
	BY y0;
	BZ z0;
	
public:
	void show_position(Toy&toy);
	void GoToPosotion(int argX,int argY,int argZ,Toy&toy);
	void sync_position(Toy&toy);
	void changeColor(Toy&toy);

};

