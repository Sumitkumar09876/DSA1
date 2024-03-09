#include <iostream>
using namespace std;
class parent
{
public:
    int name;

public:
    void father()
    {
        cout << "I am your father:";
    }
};
class child : public parent
{
    public:
    int age;
};
int main()
{
    child ch;
    ch.father();
}