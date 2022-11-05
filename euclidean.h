#include <iostream> 
using namespace std; 

class Eucl
{
    friend ostream& operator<<(ostream&, Eucl&);
    public:
    Eucl(); 
    Eucl(int, int);
    int FindGCD();

    private:
    int FirstNum; 
    int SecondNum; 
};