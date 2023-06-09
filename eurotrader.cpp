#include <iostream>
#include <cmath>

double calculateOptionPrice(double S, double K, double T, double r, double sigma, bool isCall) {
    double d1 = (log(S / K) + (r + pow(sigma, 2) / 2) * T) / (sigma * sqrt(T));
    double d2 = d1 - sigma * sqrt(T);

    double optionPrice;
    if (isCall) {
        optionPrice = S * cdfNormal(d1) - K * exp(-r * T) * cdfNormal(d2);
    } else {
        optionPrice = K * exp(-r * T) * cdfNormal(-d2) - S * cdfNormal(-d1);
    }

    return optionPrice;
}

double cdfNormal(double x) {
    return 0.5 * (1 + erf(x / sqrt(2)));
}

int main() {
    double S, K, T, r, sigma;
    bool isCall;

    // Prompt user for input values
    std::cout << "Enter current stock price: ";
    std::cin >> S;
    
    std::cout << "Enter strike price: ";
    std::cin >> K;

    std::cout << "Enter time to expiration (in years): ";
    std::cin >> T;

    std::cout << "Enter risk-free interest rate: ";
    std::cin >> r;

    std::cout << "Enter volatility: ";
    std::cin >> sigma;

    std::cout << "Enter 1 for Call option or 0 for Put option: ";
    std::cin >> isCall;


    // Calculate option price
    double optionPrice = calculateOptionPrice(S, K, T, r, sigma, isCall);

    // Output result
    std::cout << "Option Price: " << optionPrice << std::endl;

    return 0;
}
