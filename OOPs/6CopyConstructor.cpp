#include <iostream>
using namespace std;
class copycons
{
public:
    int score;

public:
    copycons(int score)
    {
        this->score = score;
        cout << "Hello World";
    }
    int copyto()
    {
        cout << "Copied Successfull " << this->score;
        return 0;
    }
    copycons(copycons &temp)
    {
        cout << "Copy Constructor:" << temp.score;
    }
};
int main()
{
    copycons c(45);
    cout << endl;
    // copycons c1(c);
    // c1.copyto();
    cout << endl;
    copycons c2(c);
}
