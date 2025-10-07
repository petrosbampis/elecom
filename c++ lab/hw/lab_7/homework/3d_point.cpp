/* 
Για ένα σύστημα συντεταγμένων στον τρισδιάστατο χώρο, να γραφούν 4 μέθοδοι. 
Με την πρώτη θα ανατίθονται ξεχωριστά οι τρεις συντεταγμένες (x, y, z) και με τη δεύτερη 
θα δίνονται όλες μαζί. Η τρίτη μέθοδος θα εμφανίζει τις τρεις συντεταγμένες του σημείου και 
με την τέταρτη θα μετακινείται μία από τις συντεταγμένες κατά μία τιμή.

ΟΝΟΜΑΤΕΠΩΝΥΜΟ ΦΟΙΤΗΤΗ: ΜΠΑΜΠΗΣ ΠΕΤΡΟΣ
*/

#include <iostream>
using namespace std;

class Space
{
		float x, y, z;	
	public:
	
		void set_x(float x)
		{
			this->x=x;
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
		
		void move(char axis, float d)
		{
		    
		    switch (axis)
		    {
		        case 'x':
		        x = x + d;
 				break;
 				
 				case 'y':
 				y= y + d;
 				break;
 				
 				case 'z':
 				z = z + d;
                break;	
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
	p.move('x', 5);
	cout << "NEW COORDINATES. ";
	p.print_point();

	return 0;
	
}
