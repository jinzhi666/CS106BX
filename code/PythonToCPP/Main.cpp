#include <iostream>
#include "console.h"
#include "vector.h"
// 这里是斯坦福的库
#include "strlib.h"
using namespace std;

int main() {
    printf("hello world\n");
    string text = "a walk in the park";
    Vector<string> parts = stringSplit(text, " ");
    for (auto part : parts) {
        cout << part << endl;
    }
    text = "123456";
    int value = stringToLong(text);
    printf("value = %d\n", value);
    text = to_string(value);
    return 0;
}
