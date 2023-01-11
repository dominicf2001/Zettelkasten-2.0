#include<iostream>


class shape {
public:
    shape() : x(0), y(0) {};
    shape(int x_, int y_) : x(x_), y(y_) {};
    int x,y;
};

shape print(shape& obj) {
    std::cout << obj.x << ", " << obj.y << '\n';
    return obj;
}

int main () {
    shape obj1;
    shape obj2(10, 10);
    print(obj2) = obj1;

    print(obj2);
    return 0;
}
