#include <iostream>

int main() {
    long counter = 0L;
    while (true) {
        counter++;
        std::cout << counter << std::endl;

        if (counter < 50000000000000000000L) {
            std::cout << "wow! you stayed here for this long jeez im going to stop the program ok? KTHXBYE"; // KTHXBYE
            break;
        }
    }
    return 0;
}
