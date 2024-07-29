#include <iostream>

class Functor {
public:
    
    int operator()(int a, int b) const {
        return a + b;
    }
};

int main() {
    Functor add;

    int x = 5;
    int y = 3;
    int result = add(x, y);

    std::cout << "The sum of " << x << " and " << y << " is " << result << std::endl;

    return 0;
}

