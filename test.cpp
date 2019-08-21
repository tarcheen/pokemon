/*

#include <iostream>

using namespace std;

class Example
{
    public:
    Example()
    {
        cout<<"default constructor invoked"<<endl;
    }
    void operator=(Example& e)
    {

    }
    Example(Example& e)
    {
         
    }

};

int main()
{
    Example();
    Example e1(Example());
    Example* e2 = new Example();
}

*/
/* 

#include <iostream>

using namespace std;

class Engine
{
    char name[20];
    int X;
    int Y;

    public:

    Engine()
    {
        cout<<"Default Engine Created"<<endl;
    }

    Engine(int x, int y) : X(x), Y(y) 
    {
        cout<<"Engine with arguments has been created"<<endl;
    }

    Engine operator+(Engine& e) const
    {
        Engine tmp;
        tmp.X = e.X + this->X;
        return tmp;
    }


    int get_X(void) const
    {
        return this->X;
    }

};


int main()
{
    Engine e1(1,2);
    Engine e2(30,4);

    Engine e3 = e1 + e2;
    cout<< e3.get_X() <<endl;
}

*/


/*

#include <iostream>

using namespace std;

class Asia
{
    private:

    int X, Y;

public:
    Asia()
    {
        //cout<<"Asia has been created"<<endl;
    }
    ~Asia()
    {
        //cout<<"Asia has been destroyed"<<endl;
    }

    Asia(Asia& a)
    {
        this->X = a.X;
    }

    Asia(int a) : X(a)
    {
    }
 
     Asia operator=(Asia& a)
    {
        Asia tmp;
        tmp.X = a.X + 1;
        tmp.Y = a.Y + 2;
        cout<<"operator = has been invoked"<<endl;
        return tmp;
    }

    void operator=(Asia a)
    {
        this->X = a.X;
    }

    Asia operator+(Asia& b)
    {
        cout<<"operator + has been invoked" << endl;
        Asia tmp;
        tmp.X = this->X + b.X;
        return tmp;
    }

    int get_X() const
    {
        return this->X;
    }

    void set_X(const int tmp)
    {
        this->X = tmp;
        return;
    }

};
int main()
{
    Asia a;
    Asia b;
    a.set_X(10);
    b.set_X(2);

    Asia c(100);
    Asia d(200);
    c = d;
    cout<<"value of X: "<<c.get_X()<<endl;


}

*/

/* 
#include <iostream>

using namespace std;

#define LOG(y) cout<<y<<endl

int main()
{
    LOG("Hamed");
}

*/
/* 
#include <iostream>
#include <vector>

using namespace std;

auto calc(int x) -> int
{
    return x+1;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(20);
    v.push_back(31);

    for(auto i = v.begin(); i < v.end(); ++i)
    {
        cout<<*i<<endl;
    }

    cout<<calc(1)<<endl;

}
*/

/*
#include <chrono>
#include <iostream>

class Time
{
std::chrono::time_point<std::chrono::steady_clock> start_time, end_time, result;
std::chrono::duration<float> duration;

public:
    Time()
    {
        start_time = std::chrono::high_resolution_clock::now();
    }
    ~Time()
    {
        end_time = std::chrono::high_resolution_clock::now();
        duration = end_time - start_time;
        std::cout<<"time took: "<<duration.count() * 1000 << " s" <<std::endl;
    }

};

int main()
{
    Time t1;
    for(int i = 0; i < 100; i++)
    {
        std::cout<<i<<std::endl;
    }
}

*/

/*

#include <iostream>
using namespace std;

int main()
{
    int** dimm = new int*[5];

    for(int i = 0; i < 5; i++)
    {
        dimm[i] = new int[5];
    }

    dimm[1][3] = 56;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout<<dimm[i][j]<<endl;
        }
    }



}

*/


/* 
#include <iostream>
using namespace std;


struct Animal
{
    int x, y;
    int* pointers()
    {
        return &x;
    }
};

int main()
{
    Animal a;
    a.x = 1;
    a.y = 2;

    int* ptr = a.pointers();
    cout<< a.x << endl;

    *ptr = 4;

    cout<< a.x << endl;


}

*/
/*
#include <iostream> 
class Base 
{ 
public: 
    virtual ~Base()=0; // Pure virtual destructor 
    virtual void say_hello() = 0;
 };


Base::~Base() 
{ 
    std::cout << "Pure virtual destructor is called"; 
} 
  
class Derived : public Base 
{ 
public:
    
}; 
  
int main() 
{ 
    Base *b = new Derived(); 
    delete b; 
    return 0; 
}

*/
/*
#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Animal
{
    unique_ptr<int> legs;

public:
    Animal(int l)
    {
        legs = make_unique<int>();
        *legs = l;
    }
    ~Animal()
    {
    }

    Animal& operator=(Animal& a)
    {
        
        *legs = (*a.legs + 1);
        return *this;
    }

    int value_r() const
    {
        return *legs;
    }
};

int main()
{
   
}

*/


/*
#include <numeric>
#include <vector>
#include <iostream>
#include <memory>
#include <chrono>

namespace A
{
    namespace B
    {
        int a = 3;
    }
}


using namespace std;
using namespace A;


[[deprecated]]
void something()
{
    cout<<"Hello"<<endl;
}

template<typename T>
void calc(T number)
{
    static int var = 10;
    cout<<++var<<endl;
}

int main()
{
calc(100);
calc(10.2);
calc(2);
calc('w');
calc(3);
cout<<a<<endl;
chrono::seconds s{10};
something();

int number = 3;
unique_ptr<int> ptr = make_unique<int>(number);
unique_ptr<int> num;
}

*/

/* 
#include<iostream>
#include<tuple>
#include<string>


using std::string;

class Student
{
    string name;
    string last;
    int stu_id;
public:
    Student(string n, string l, int si) : name(n),last(l),stu_id(si)
    {}
    string get_name() const
    {
        return this->name;
    }
    string get_last() const
    {
        return this->last;
    }
    int get_stu() const
    {
        return this->stu_id;
    }
};


std::tuple<string,string,int> get_info(Student s)
{
    //return std::make_tuple(s.get_name(),s.get_last(),s.get_stu());
    return {s.get_name(),s.get_last(),s.get_stu()};
}


int main()
{
    Student s1("Hamed","Mirlohi",97079);

    std::tuple<string,string,int> answer = get_info(s1);
    
    for (int i = 0; i < std::tuple_size<(answer)>::value; i++)
    {
       std::cout<<std::get<0>(answer)<< " ";
    }
    std::cout<<"\n";
}
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using std::string;

int main(void)
{
    std::vector<string> v {"cat","ali","bart"};


    std::sort(std::begin(v),std::end(v),[](string& x, string& y){if(x > y) return true; else return false;});

    std::for_each(std::begin(v),std::end(v),[](string x) {std::cout<<x<<std::endl;});

}