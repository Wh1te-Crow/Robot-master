#include "module.h"
void BP::GoToPosotion(int argX,int argY,int argZ,Toy&toy)
{
while (!((argX==x0.PX)&&(argY==y0.PY)&&(argZ==z0.PZ)))
{
if(argX>x0.PX) x0.add_position();
if(argX<z0.PX) x0.sup_position();
if(argZ>z0.PZ) z0.add_position();
if(argZ<z0.PZ) z0.sup_position();
if(argY>y0.PY) y0.add_position();
if(argY<y0.PY) y0.sup_position();
toy.position[0]=x0.PX;
toy.position[1]=y0.PY;
toy.position[2]=z0.PZ;
cout<<"("<<toy.position[0]<<";"<<toy.position[1]<<";"<<toy.position[2]<<")"<<endl;
}

	
};
void BP::show_position(Toy&toy)
{
cout<<"("<<toy.position[0]<<";"<<toy.position[1]<<";"<<toy.position[2]<<")"<<endl;
	
};
void BP::sync_position(Toy&toy)
{
toy.position[0]=x0.PX;
toy.position[1]=y0.PY;	
toy.position[2]=z0.PZ;	
};

