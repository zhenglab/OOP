#include <iostream>  
  
using namespace std;  
  
class Animal{  
    public:  
        void shout(){  
            cout << "Not implement" << endl;  
        }  
};  
  
class Cat:public Animal{  
    public:  
        void shout(){  
            cout << "Miao" << endl;  
        }  
};  
  
class Dog:public Animal{  
    public:  
        void shout(){  
            cout << "Wang" << endl;  
        }  
};  
  
Animal* getAnimal(int flag){  
    if(flag % 2){  
        return new Cat();  
    }else{  
        return new Dog();  
    }  
}  
  
int main(){  
    int flag;  
    cin >> flag;  
    Animal* animal = getAnimal(flag);  
    animal->shout();  
    return 0;  
}
