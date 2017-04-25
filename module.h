#include <iostream>
#include <math.h>
#include <string>


using namespace std;

class Button
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
};
class BX: public Button
{	
public:	
	void add_position();
	void sup_position();
};
class BY: public Button
{
public:	
	void add_position();
	void sup_position();
};

class BZ: public Button
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
};
