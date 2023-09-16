// This passes
double interest_rate(double balance) {
    
    if (balance < 0)
        return 3.213;
    if (balance >= 5000)
        return 2.475;
    if (balance < 1000)
        return 0.5;

    return 1.621;
}

double yearly_interest(double balance) {

    return balance * interest_rate(balance) / 100;
} 

double annual_balance_update(double balance) {
    
    return balance + yearly_interest(balance);
}

// years_until_desired_balance calculates the minimum number of years required
// to reach the desired balance.
int years_until_desired_balance(double balance, double target_balance) {
    // TODO: Implement the years_until_desired_balance function
    int years = 0;

    for (double i{ balance }; i < target_balance; i = annual_balance_update(i)) {
        ++years;
    }

    return years;
}