#include <iostream>

class World {
    public:
	World() {
	    std::cout << "Hello World!" << std::endl;
	}

	~World() {
	    std::cout << "Good Bye!" << std::endl;
	}
};

World TheWorld;

int main() {
  std::cout<<"This is main"<<std::endl;
    return 0;
}
