#include <iostream>
#include <memory>

class Fish {
public:
    virtual void swim() {
        std::cout << "Fish is swimming." << std::endl;
    }
};

class Carp : public Fish {
public:
    void swim() override {
        std::cout << "Carp is swimming." << std::endl;
    }
};

int main() {
    std::unique_ptr<Carp> carpPtr = std::make_unique<Carp>();
    Fish *fishPtr = carpPtr.get();

    fishPtr->swim();

    return 0;
}
