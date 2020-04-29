#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string name;
    cout << "Enter server name: ";
    cin >> name;
    const string ack = "Server starting name: " + name;

    // blank rows surrounding ack
    const int pad = 5;
    
    // total # of rows
    const int rows = pad * 2 + 3;

    // columns/width
    const string::size_type width = ack.size() + pad * 2 + 2;

    // row to write output
    const int writeRow = rows / 2;

    // separate output from input
    cout << endl;

    // write output
    int r = 0;

    // *Invariant*: we have written r rows of output so far
    for(int r = 0; r != rows; ++r) {

        // after this is run the invariant becomes false
        string::size_type c = 0;

        while(c != width) {

            if(r == pad +1 && c == pad + 1) {
                cout << ack;
                c += ack.size();
            } else {

                if(r == 0 || r == rows - 1 || c == 0 || c == width - 1)
                    cout << '*';
                else 
                    cout << ' ';
                ++c;
            } 
        }

        cout << endl ;
    }

    return 0;
}