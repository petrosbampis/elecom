//systhma antikeimenwn gia 3d xwro. Na exei 4 methodous gia na thesw ksexwrista x,y,z kai mia oles mazi
//na epistrefei thn timh twn syntetagmenwn (mia x mia y mia z mia oles mazi)
//mia amkoma methodos tha emfanizei tis 3 sintetagmenes enos shmeiou
//mia akoma pou tha metakinei ena apo ta shmeia kata dx. tha dexetai dyo orismata.

#include <iostream>
using namespace std;

class Space
{
		float x, y, z;	
	public:
		void set_x(float x)
		{
			this->x=x; //my_x=x, my_x private, to x pou erxetai sthn setx isoutai me to x tou orismatos pou erxetai
		}
		void set_y(float y)
		{
			this->y=y;
		}
		void set_z(float z)
		{
			this->z=z;
		}
		void set_xyz()
		{
			cout << "x coordiante: " << x << endl;
			cout << "y coordiante: " << y << endl;
			cout << "z coordiante: " << z << endl;
		}
		
		void print_point()
		{
			cout << "The coordiantes of the point are: " << "x: " << x << " y: " << y << " z: " << z << endl;
		}
		
		float move(int a, float d)
		{
			if(a == 1)
			{
				float new_x = x + d;
				cout << "New x coordinate is: " << new_x << endl;
			}
			else if(a == 2)
			{
				float new_y= y+ d;
				cout << "New y coordinate is: " << new_y << endl;
			}
			else if(a == 3)
			{
				float new_z = z+ d;
				cout << "New z coordinate is: " << new_z << endl;
			}
		}
		
};

int main()
{
	Space p;
	p.set_x(5);
	p.set_y(4.1); 
	p.set_z(8.1);
	p.set_xyz();
	
	p.print_point();
	p.move(1, 5);

	
	
}
