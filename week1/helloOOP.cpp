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
    return 0;
}
