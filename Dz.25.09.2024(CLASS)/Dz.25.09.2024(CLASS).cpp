#include <iostream>

using namespace std;

class Fract {
private:
    int num;
    int denom;
public:
    Fract(int numer, int denom) {
        if (denom == 0) {
            throw invalid_argument("Denominator cannot be zero.");
        }
        this->num = numer;
        this->denom = denom;
    }
    static Fract random_fraction() {
        return Fract(rand() % 100 + 1, rand() % 100 + 1);
    }
    void print() const {
        cout << num << "/" << denom << endl;
    }
};


int main()
{
    srand(time(NULL));
    Fract fract1(3, 4);
    Fract fract2 = Fract::random_fraction();
    cout << "First fract: ";
    fract1.print();
    cout << "Second fract (random): ";
    fract2.print();
}
