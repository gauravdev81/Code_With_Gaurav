#include <iostream>
using namespace std;

bool is_magic_number(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 5) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int min_magic_numbers(int N) {

    if(N<4)
    {
        return -1;
    }
    if (is_magic_number(N)) {
        return 1;
    }

    int result = N;  // Initialize result with N itself

    // Try every possible value of i as a magic number
    for (int i = 1; i <= N; i++) {
        if (is_magic_number(i)) {
            result = min(result, min_magic_numbers(N - i) + 1);
        }
    }

    return result;
}

int main() {
    int N = 35;
    int result = min_magic_numbers(N);
    cout << result << endl;  // Output: 3

    return 0;
}
















// #include <iostream>
// using namespace std;

// bool is_magic_number(int n) {
//     while (n > 0) {
//         int digit = n % 10;
//         if (digit != 4 && digit != 5) {
//             return false;
//         }
//         n /= 10;
//     }
//     return true;
// }

// int min_magic_numbers(int N) {
//     if (is_magic_number(N)) {
//         return 1;
//     }

//     for (int i = 1; i < N; i++) {
//         if (is_magic_number(i) && is_magic_number(N - i)) {
//             return 2;
//         }
//     }

//     return -1;
// }

// int main() {
//     int N = 63;
//     int result = min_magic_numbers(N);
//     cout << result << endl;  // Output: 2

//     return 0;
// }
