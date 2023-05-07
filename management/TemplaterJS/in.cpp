include<iostream>


class shape {
public:
    shape() : x(), y() {};
    shape(int x_, int y_) : x(x_), y(y_) {};
    int x,y;
};

shape print(shape& obj) {
    std::cout << obj.x << ", " << obj.y << '\n';
    return obj;
}

int main () {
    shape obj;
    shape obj(, );
    print(obj) = obj;

    print(obj);
    return ;
}
