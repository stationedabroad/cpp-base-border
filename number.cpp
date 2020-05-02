#include <iostream>
#include <vector>

using namespace std;

vector<int> f(int n) 
{
    vector<int> v(n);
    return v;
}

const char* error() {
    return "error message";
}

int main() 
{

    double y = 0.0;
    double& x = y;
    x = 1.0;

    char c = 'a';
    char* p = &c;
    *p = 'b';

    vector<int> myVec;
    myVec = f(5);

    int v5[8] = {1,2,3,4};
    int* v1 = v5;
    cout << v1 << "----" << &v5[0] <<endl;
    // int v6[8] = v5;

    string s1 = "Bohr";
    char* d = "Plato";
    char e[] = "Newton";
    e[0] = 'P';

    enum currency {USD, EUR, JPY, AUD};
    currency local = JPY;

    cout << "first x: " << x << " then y: " << y << endl;
    cout << " first c: " << c << " then its addr: " << p << endl;

    for(vector<int>::iterator i = myVec.begin(); i != myVec.end(); ++i) {
        *i = 2;
        cout << *i << ' ' ;
    }
    cout << error() << endl;

    for(vector<int>::iterator i = myVec.begin(); i != myVec.end(); ++i) {
        // *i = 2;
        cout << *i << ' ' ;
    }    

    // cout << "my Vector: " << myVec << endl;
    cout << sizeof("Bohr") << endl;
    cout << d << " " << sizeof(e) << "\n\n";

    for(int i = 0; i < sizeof(e); i++) {
        cout << e[i] << endl;
    }

    cout << local << endl;
    cout << "Beep at end of message\a\n";

    char alpha[] = "abcdefg"
    "ABCDEFG";
    string rawString = R"("i can() put anything here\ see")";
    cout << alpha << "---" << rawString << endl;

    return 0;
}
