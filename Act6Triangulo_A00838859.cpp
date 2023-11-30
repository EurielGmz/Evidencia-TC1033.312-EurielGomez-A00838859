#include <iostream>
#include <math.h>
using namespace std;


class Punto {
private:
    double x;
    double y;

public:
    
    Punto(double x = 0, double y = 0) {
        this->x = x;
        this->y = y;
    }

    
    double getX() {
        return x;
    }

   
    double getY() {
        return y;
    }

    void setX(double x) {
        this->x = x;
    }

    
    void setY(double y) {
        this->y = y;
    }
};


class Triangulo {
private:
    
    Punto Vertice1;
    Punto Vertice2;
    Punto Vertice3;

public:
    
    Triangulo(Punto Vertice1, Punto Vertice2, Punto Vertice3) {
        this->Vertice1 = Vertice1;
        this->Vertice2 = Vertice2;
        this->Vertice3 = Vertice3;
    }

    
    Triangulo() {
        this->Vertice1 = Punto(0, 0);
        this->Vertice2 = Punto(50, 30);
        this->Vertice3 = Punto(25, 10);
    }

    
    double perimetro() {
        double side1 = sqrt(pow(Vertice2.getX() - Vertice1.getX(), 2) + pow(Vertice2.getY() - Vertice1.getY(), 2));
        double side2 = sqrt(pow(Vertice3.getX() - Vertice2.getX(), 2) + pow(Vertice3.getY() - Vertice2.getY(), 2));
        double side3 = sqrt(pow(Vertice1.getX() - Vertice3.getX(), 2) + pow(Vertice1.getY() - Vertice3.getY(), 2));
        return side1 + side2 + side3;
    }

    
    double area() {
        double side1 = sqrt(pow(Vertice2.getX() - Vertice1.getX(), 2) + pow(Vertice2.getY() - Vertice1.getY(), 2));
        double side2 = sqrt(pow(Vertice3.getX() - Vertice2.getX(), 2) + pow(Vertice3.getY() - Vertice2.getY(), 2));
        double side3 = sqrt(pow(Vertice1.getX() - Vertice3.getX(), 2) + pow(Vertice1.getY() - Vertice3.getY(), 2));

        double s = (side1 + side2 + side3) / 2;

        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

};


int main() {
    
    Triangulo triangulo;

    
    cout << "El perimetro es: " << triangulo.perimetro() << endl;
    cout << "El area es: " << triangulo.area() << endl;
    return 0;
}