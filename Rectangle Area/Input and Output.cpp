#include <iostream>

using namespace std;
class Rectangle{
public:
int len,wid;    
void display()
{
cout<<len<<" "<<wid<<endl;    
}
};
class RectangleArea:public Rectangle
{
public:
void read_input()
{
    cin>>len>>wid;
}
void display()
{
    cout<<len*wid;
}

};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
