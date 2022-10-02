// Classes and Objects 
#include<iostream>
#include <cstring>
using namespace std;

class Hero{
    
    private:
    int health;
    int Level;

    public:
    char *name;

    static int play;    

    //Default Constructor
    Hero(){
        cout<<"Default Consturctor is Called "<<endl;
        name = new char[100]; // Dynamically memory allocated
    }

    // Patamterized Constructor
    Hero( int health, int Level){
        cout<<"Parameterized Constructor is Called"<<endl;
        this->health = health;
        this->Level = Level;
    }

    // Copy Constructor
    Hero(Hero &temp){
        cout<<"Copy Constructor is called "<<endl;
        // this->name = temp.name;
        this->health = temp.health;
        this->Level = temp.Level;

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;
    }

    // function
    void print(){
        cout<<"{ Health : "<<health<<" ,";
        cout<<"Level : "<<Level<<" ,";
        cout<<"Name : "<<name<<" }"<<endl;
    }
    // Getters and Setters
    // void setName(char name){
    //     this->name = name;
    // }

    // char getName(){
    //     return name;
    // }

    void setHealth(int health){
        this->health = health;
    }

    int getHealth(){
        return health;
    }

    void setLevel(int level){
        this->Level = level;
    }

    int getLevel(){
        return Level;
    }

    void setNewName(char word[]){
        strcpy(this->name , word);
    }

    // Static Function
    static int playTime(){
        cout<<"Static function is called "<<endl;
        cout<<"Static Data Member"<<play<<endl;
        return play;
    }
    
};

// Initalizing the static data member
int Hero::play = 34;

int main()
{   

    cout<<"Static Data member : "<<Hero::play<<endl;
    cout<< Hero::playTime() <<endl;

    // Hero h1;
    // h1.setHealth(12);
    // h1.setLevel(94);
    // char word[7] = "BABBAR";
    // h1.setNewName(word);

    // //  h1.print();

    // // Use Default Copy Constructor
    // Hero h2(h1);
    // // Hero h2 = h1; -> this allows works
    // // h2.print();

    // h1.name[0] = 'G';
    // h1.print();
    // h2.print();

    // h1 = h2;
    // h1.print();
    // h2.print();



    // Hero Suresh('B',99,23);
    // Suresh.print();

    // Hero Ramesh(Suresh);
    // Ramesh.print();

    // Hero ram('z',99,2);
    // // Static Allocation
    // // Hero ram;
    // // ram.setHealth(23);
    // // ram.setLevel(99);
    // // ram.setName('R');

    // cout<<"Ram Health : "<<ram.getHealth()<<endl;
    // cout<<"Ram Level : "<<ram.getLevel()<<endl;
    // cout<<"Ram Name : "<<ram.getName()<<endl;

    // Hero obj(ram);
    // cout<<"Obj Name : "<<obj.getName()<<endl;
    // Hero rana(ram);
    // cout<<"Copy constructor"<<endl;
    // cout<<"Rana Health : "<<rana.getHealth()<<endl;
    // cout<<"Rana Level : "<<rana.getLevel()<<endl;
    // cout<<"Rana Name : "<<rana.getName()<<endl;

    
    // Dynamic Allocation
    // Hero *r = new Hero;
    // r->setHealth(99);
    // r->setLevel(99);
    // r->setName('D');
    // cout<<"Ram Health : "<<r->getHealth()<<endl;
    // cout<<"Ram Level : "<<r->getLevel()<<endl;
    // cout<<"Ram Name : "<<r->getName()<<endl;




    // Static Allocation
    // Hero Dilip;
    // cout<<"Size of the object is : "<<sizeof(Dilip)<<endl;

    // The data members can only access if it is a public Access Specifier.
    // Dilip.name = 'A';
    // Dilip.health = 59;
    // Dilip.Level = 32;
    // cout<<"Name : "<<Dilip.name<<endl;
    // cout<<"Health : "<<Dilip.health<<endl;
    // cout<<"Level : "<<Dilip.Level<<endl;

    return 0;
}