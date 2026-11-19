
#include <stdio.h>

// Array to store previously discovered prime numbers
int primes[1000000];

int main() {
    long long sum = 0;

    int count = 0;

    // Check every number below 2 million
    for (int i = 2; i < 2000000; i++) {

        // Initially assume that the number is prime
        int isprime = 1;

        // Check divisibility using previously discovered primes
        for (int k = 0; k < count; k++) {

            // No need to check beyond the square root of i
            if (1LL * primes[k] * primes[k] > i) {
                break;
            }

            // If divisible, the number is not prime
            if (i % primes[k] == 0) {
                isprime = 0;
                break;
            }
        }

        // If the number is prime
        if (isprime == 1) {

            // Store the prime number in the array
            primes[count] = i;

            // Add the prime number to the total sum
            sum += i;

            // Increase the count of discovered primes
            count++;
        }
    }

    // Display the final sum
    printf("The sum of all the primes below two million is: %lld\n", sum);

    return 0;
}
