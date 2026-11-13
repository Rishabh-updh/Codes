#include <iostream>
#include <string>
using namespace std;
class Teacher{
    // Properties or attributes
    private:
    double salary=250000;
    public:
    string name;
    string dept;
    string subject; 
    // making a constructor{non-parameterised}
    Teacher(){          // if i wish to use the same name in the parameter and the variables then us this->prop
        cout<<"Hi i am constructor !!\n";
        dept="Computer Science";
    }
    // {parameterised constructor}
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    // {copy constructor}
    Teacher(Teacher &orgObj){ // pass by reference
        cout<<"I am custom copy constructor \n";
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;

    }
    // destructor
    ~Teacher(){
        cout<<"Hi I am destructor i am here to delete everything !!"<<endl;
        
    }

    // methods or member functions[functions in the class itself]
    void changedepartment(string newdept){
        dept=newdept;
    }
    // setter function
    void setsalary(double salary){
        salary=salary;;
    }
    // getter function
    double getsalary(){
        return salary;
    }
    void getinfo(){
        cout<< "Name : "<<name<<endl;
        cout<< "Subject : "<<subject<<endl;

    }

};
int main() {
    Teacher t1; // constructor ko call jati hai internally hame nhi pata lagta 
                // (agr hamne nhi banaya toh compiler anpa default wala use karega)
    t1.name = "Rishabh upadhyay";
    t1.dept = "Civil";
    t1.subject = "PPS";
    cout<<t1.name<<endl<<t1.dept<<endl<<t1.subject<<endl;
    double x = 250000;
    t1.setsalary(x);
    cout<<t1.getsalary()<<endl;
    Teacher t2(t1);
    t2.getinfo();

    return 0;
}