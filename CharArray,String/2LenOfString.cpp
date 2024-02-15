#include <iostream>
using namespace std;
class length
{
public:
    int leng(char name[])
    {
        int count = 0;
        for (int i = 0; name[i] != '\0'; i++)
        {
            count++;
        }
        return count;
    }
};
int main()
{
    char name[20];
    cout << "enter the name:" << endl;
    cin >> name;
    length le;
    cout << "Length of string:" << le.leng(name);
}