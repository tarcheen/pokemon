/* PART A IMPLEMENTATION OF SINGLETON CLASS */

#include<iostream>
#include<string>

using namespace std;

class Animal
{
    string name;

    Animal(string n) : name(n) 
    {
    }

public:

    static Animal single;

    void set_name(string name)
    {
        this->name = name;
    }
    string& read_name()
    {
        return this->name;
    }

};

Animal Animal::single("Ali");

int main()
{
    //Animal::single.set_name("Hassan");
    cout<<Animal::single.read_name()<<endl;
}


/* PART B IMPLEMENTATION OF SINGLETON CLASS */

#include<iostream>
#include<string>

using namespace std;

class Animal
{
    string name;

    Animal(string n) : name(n)
    {

    }

public:

    static Animal& get_animal_instance()
    {
        static Animal obj("Jay");
        return obj;
    }

    string& get_animal_name()
    {
        return this->name;
    }
    
    void set_animal_instance(string n)
    {
        this->name = n;
    }

};


int main()
{
    cout<<Animal::get_animal_instance().get_animal_name()<<endl;
    Animal::get_animal_instance().set_animal_instance("Ali");
    cout<<Animal::get_animal_instance().get_animal_name()<<endl;
}


