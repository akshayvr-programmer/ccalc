#include <iostream>
#include <cmath>

using namespace std;

double e = 2.71828;

// Main class calculus
class calculus {
public:
    // Sub Class differentiation
    class differentialtion {
    public:
        int powered(int n, int x) {
            // d(x^n)/dx = n * x ^ n - 1

            return n * pow(x, n - 1);



        }

        double sine(double x) {
            return cos(x);

        }

        double cosine(double x) {
             return -sin(x);

        }
        double tangent(double x) {
            return pow(1 / cos((x)), 2);

        }

        double ex(double x) {
            return pow(e, x);


        }

        double logarithm(double x) {
            return 1 / x;


        }
        double  ax(double a, double x) {
            return pow(a, x) * log(a);

        }

        double sec(double x) {
            return 1 / cos(x) * tan(x);

        }

        double cosec(double  x) {
            return -1 / sin(x) * 1 / tan(x);
        }

        double cot(double x) {
            return pow(1 / sin(x), 2);

        }

        class integration {
        public:
            class def_integration {
            public:

                double cosineudu(double u, double U, double L) {
                    return sin(u) * U - sin(u) * L;
                }

                double sineudu(double u, double U, double L) {
                    return -cos(u) * U + cos(u) * L;
                }

                double secSec(double u, double U, double L) {
                    return sin(u) / cos(u) * U - sin(u) / cos(u) * L;
                }
                double cscCsc(double u, double U, double L) {
                    -1 / tan(u) * U - -1 / tan(u) * L;

                }

                double sectan(double u, double U, double L) {
                    return 1 / cos(u) * U - 1 / cos(u) * L ;

                }

                double csccot(double u,double U, double L) {
                    return - 1 / sin(u) * U - -1 / sin(u) * L;

                }
                double tangent(double u, double U, double L) {
                    return log(1 / cos(u)) * U - log(1 / cos(u)) * L;
                }

                double cotudu(double u, double U, double L) {
                    return log(sin(u)) * U - log(sin(u)) * L;
                }

                double secudu(double u, double U, double L) {
                    return log(1 / cos(u) + tan(u) ) * U - log(1 / cos(u) + tan(u)) * L;


                }

                double cscudu(double u, double U, double L) {
                    return -log(1 / sin(u) + 1 / tan(u)) * U - -log(1 / sin(u) + 1 / tan(u)) * L ;

                }

                double xn(double n, double U, double L, int x) {
                    return pow(x, n + 1) / n + 1 * U - pow(x, n + 1) * L;

                }





            };

            class indef_integrattion {
            public:

                string xn() {
                    return "x ^ n + 1 / n + 1 + c";

                }

                string cscudu() {
                    return "-ln(cosec(u) + cot(u)) + c";

                }

                string secudu() {
                    return "ln(sec(u) + tan(u)) + c";
                }

                string cotudu() {
                    return "ln(sin(u)) + c";
                }
                string cosudu() {
                    return "sin(u) + c";
                }

                string sinudu() {
                    return "-cos(u) + c";
                }
                string secSecudu() {
                    return "tan(u) + c";
                }
                string cscCscudu() {
                    return "-cot(u) + c";
                }
                string sectanudu() {
                    return "sec(u) + c";

                }
                string cscotudu() {
                    return "-cosec(u) + c";
                }
                string tangentudu() {
                    return "ln(sec(u) + tan(u) + c)";
                }





            };
        };




    };
};



int main() {
    








    return 10;




}

