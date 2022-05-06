#include "Things.h"

int main()
{
    int n;
    cout << "Choose: Complex - 1, Vector - 2, Circle - 3" << endl;
    cin >> n;
    cout << endl;

    switch (n) {
    case 1: {
        Complex a;
        Complex b;

        double ar;
        double ai;
        double br;
        double bi;

        cout << "Input A real part" << endl;
        cin >> ar;
        cout << "Input A imagine part" << endl;
        cin >> ai;
        cout << "Input B real part" << endl;
        cin >> br;
        cout << "Input B imagine part" << endl;
        cin >> bi;

        a.set_complex(ar, ai);
        b.set_complex(br, bi);

        cout << "Absolute value of A: " << a.abs() << endl;
        cout << "Absolute value of B: " << b.abs() << endl;

        cout << "Summ: ";
        Complex c = a.sum(a, b);
        c.output_complex();
        cout << endl;

        cout << "Difference: ";
        c = a.diff(a, b);
        c.output_complex();
        cout << endl;


        break;
    }
    case 2: {
        Vector a;
        Vector b;

        double ax;
        double ay;
        double bx;
        double by;

        cout << "Input X coordinate of A: ";
        cin >> ax;
        cout << "Input Y coordinate of A: ";
        cin >> ay;
        cout << "Input X coordinate of B: ";
        cin >> bx;
        cout << "Input Y coordinate of B: ";
        cin >> by;

        a.setVector(ax, ay);
        b.setVector(bx, by);

        cout << "A length: " << a.length() << endl;
        cout << "B length: " << b.length() << endl;

        cout << "AB scalar multiplication: " << a.scalarMult(a, b) << endl;


        break;
    }
    case 3: {
        Circle q;

        double radius;
        string color;

        cout << "Input circle radius: ";
        cin >> radius;
        cout << "Input circle color: ";
        cin >> color;

        q.setCircle(radius, color);

        cout << "Circle ring length: " << q.ring_length() << endl;
        cout << "Circle area: " << q.area() << endl;

        break;
    }
    }

}
