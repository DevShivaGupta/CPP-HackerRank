#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Student{
    public:
    int ag,stand;
    string first,last;
    void set_age(int age)
        {
        ag=age;
        }
    void set_standard(int standard)
        {
        stand=standard;
        }
    void set_first_name(string first_name)
        {
        first=first_name;
        }
    void set_last_name(string last_name)
        {
        last=last_name;
        }
    int get_age()
        {
       return ag;
        }
    int get_standard()
        {   
        return stand;
        }
    string get_first_name()
        {
        return first;
        }
    string get_last_name()
        {
        return last;
        }
    string tostring()
    {
    string b=to_string(ag);
    string a=to_string(stand);
    return  (b+","+first+","+last+","+a);  
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.tostring();
    
    return 0;
}
