#include<bits/stdc++.h>
using namespace std;

// class creation
class Hero{
    
    int health;
    public:
    char level;
    char *name;
    static int key;

    //simple constructor like the dault constructor

    Hero()
    {
        cout<<"Simple constructor called"<<endl;
        name = new char[100]; 
    }

    //parameterized constructor
    Hero(int health)
    {
        cout<<"Address of this -> : "<<this<<endl;
        this->health = health; 
        cout<<"parameterized constructor call hua"<<endl;

        // pehla wala health object hai
        // doosra wala health is input parameter
    }

    Hero(int health, int level)
    {
        cout<<"Parameterized constructor called"<<endl;
        this->health = health;
        this->level = level;
    }

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char c)
    {
        level = c;
    }

    void print()
    {
        cout<<endl;
        cout<<"Name: "<<this->name<<endl;
        cout<<"Health : "<< this->health<<endl; 
        cout<<"Level : "<< this->level<<endl<<endl; 
    }
    
    void setName(char name[])
    {
        strcpy(this->name,name);
    }


    // self created copy contructor 
    // this will do deep 
    Hero (Hero& temp)
    {
        cout<<"copy constructor called"<<endl;

        char *ch = new char[strlen(temp.name) +1];
        strcpy(ch,temp.name);
        this->name=ch;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    // destructor

    ~Hero(){
        cout<<"destructor called "<<endl;

    }

    //static function

    static int random()
    {
        return key;
    }

  



    

};

//initializing static data member i.e. key 
//NOTE : outside class

int Hero :: key = 25;

int main()
{

    //printing static data member

    //cout<< Hero::key <<endl;

    cout<<Hero::random()<<endl;

































    /*
    Hero h1;
    // h1.health=100;

    h1.setHealth(50);
    h1.setLevel('B');
    //cout<<"size of h1 is : "<<sizeof(h1)<<endl;

    cout<<"health of h1 is : "<<h1.getHealth()<<endl;

    cout<<"level of h1 is : "<<h1.getLevel()<<endl;

    */

   //dynamically allocating a Hero 

//    Hero *h = new Hero(30);
   /*
   Hero h(50);
   cout<<"Address of current object h : "<< &h <<endl;
   cout<<"New health is : "<<h.getHealth()<<endl;
   */

   // one way
   
//    (*h).setHealth(500);
//    (*h).setLevel('Z');
//     cout<<"New health is : "<<(*h).getHealth()<<endl;
//     cout<<"New level is : "<<(*h).getLevel()<<endl;



//   other way using arrow operator
/*
   h->setHealth(25);
   h->setLevel('Q');



   cout<<"New health is : "<<h->getHealth()<<endl;
   cout<<"New level is : "<<h->getLevel()<<endl;

*/


/*
    // Copy Constructor

    Hero krish(2000,'G');
    krish.print();
    
    //copy contructor called
    Hero gaurav(krish);  //copying krish object to gaurav

    gaurav.print();
*/

/*
in this part we have seen the working of shallow and deep copy
and then assignment operator

    Hero hero1;

    hero1.setHealth(1000);
    hero1.setLevel('G');
     
    char name[10]="Gaurav" ;
    hero1.setName(name);
    
    //hero1.print();

    Hero hero2(hero1);

    //hero2.print();

    hero1.name[0]='S';
    
    cout<<"Hero 1 values:"<<endl;
    hero1.print();
    cout<<"Hero 2 values:"<<endl;
    hero2.print();

    //copy assignment operation
    hero1 = hero2;

    cout<<"After copying hero2 values to hero1 using assignment operator:"<<endl;

    cout<<"Hero 1 values:"<<endl;
    hero1.print();
    cout<<"Hero 2 values:"<<endl;
    hero2.print();
*/

/*
// here we will see how destructor works

Hero a;
Hero *b = new Hero();

//statically allocated object ke liye, destructor automatically call ho jayega
//But for dynamically allocated object, we need to call the destructor manually using-> delete b;

delete b;
*/

    return 0; 
}