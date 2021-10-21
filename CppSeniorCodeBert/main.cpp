#include <iostream>
#include<string.h>

using namespace std;

class UserOne {

   public:
    virtual void sayOne(){
        cout << "UserOne sayOne Hello World!" << endl;
    }


};


class UserTwo {

   public:
    virtual void sayOne(){
        cout << "UserTwo sayOne Hello World!" << endl;
    }


};

class UserT : public UserOne, public UserTwo {

   public:
    void sayOnes(){

        cout << "UserT sayOne Hello World!" << endl;
        UserOne::sayOne();
        UserTwo::sayOne();
    }


};



struct NodeData {

    char* name;
    int age;

    NodeData(char *n=" ", int ages=0){
        name = strdup(n);
        age = ages;
    }


    NodeData(const NodeData& node){
        cout << "NodeData copy constructor" << endl;
        this->age = node.age;
        this->name = strdup(node.name);
    }



};

int main()
{
    cout << "Hello World!" << endl;
    UserT a = UserT();
//    a.sayOnes();


    NodeData node1("tiantan", 28), node2(node1);


    cout<<node1.name <<endl;
    cout<<node1.age <<endl;
    cout<<node2.name <<endl;
    cout<<node2.age <<endl;

    cout<<"node2.age ======="<<endl;

    strcpy(node2.name, "Bert");
    node2.age = 10;

    cout<<node1.name <<endl;
    cout<<node1.age <<endl;
    cout<<node2.name <<endl;
    cout<<node2.age <<endl;
    return 0;
}

