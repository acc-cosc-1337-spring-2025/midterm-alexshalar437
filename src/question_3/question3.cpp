#include "question3.h"

bool test_config()
{
    return true;
}

int get_fib_number(int n) {
    if (n <= 1) {
        return n;  // base case: return n if it's 0 or 1
    }
    int prev = 0, curr = 1;  // starting values for the Fibonacci sequence
    for (int i = 2; i <= n; ++i) {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;  // returns the nth Fibonacci number
}