#include <iostream>

#include "proto/with_extensions.pb.h"

using namespace std;

int main(int argc, char **argv) {
    MyMessage m;
    cout << "Hello, Proto." << endl;
    cout << m.DebugString() << endl;
    return 0;
}
