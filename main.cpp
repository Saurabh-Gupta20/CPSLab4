#include "mbed.h"

// main() runs in its own thread in the OS

class Shape{
    public:
        // Shape Square
        Shape(int a){
         _a = a;
         _b = -1;
        }

        // Shape Rectangle
        Shape(int a, int b){
            _a = a;
            _b = b;
            //return a * b;
        }

        int area(){
            if(_b == -1)
                return (_a * _a);
            else
                return (_a * _b);
        }

        int parameter(){
            if(_b == -1)
                return (4 * _a);
            else
                return (2 * (_a + _b));
        }

        void shape_type(){
            if(_b == -1)
                printf(" Shape is a Square with side %d \r\n", _a);
            else
                printf(" Shape is a Rectangle with sides %d and %d \r\n", _a, _b);
        }

    private:
        int _a, _b;

};

int main()
{
    Shape sqr(3);
    Shape rect(3,7);

    sqr.shape_type();
    printf("area is %d, perimeter is %d \r\n", sqr.area(), sqr.parameter());

    rect.shape_type();
    printf("area is %d, perimeter is %d \r\n", rect.area(), rect.parameter());
    while (true) {

    }
}

