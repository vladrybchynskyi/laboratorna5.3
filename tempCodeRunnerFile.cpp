double f(const double x) {
    if (abs(x) >= 1) {
        return (sin(x) + 1) / (sin(x) + cos(x));
    }
    else
    {
        double S = 0;
        int i = 0;
        double a = 1;
        S = a;
        do {
            i++;
            double R = pow(x,3) / (2 * i - 1) * 2 * i * (2 * i + 1);
                a *= R;
            S += a;
        } while (i < 4);
        return S;