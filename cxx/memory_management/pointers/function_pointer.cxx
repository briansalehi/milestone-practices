// simple function
void alpha(int a);

// more complex function
double beta(double array[5], int size);

// even more complex function
const double* gama(const double array[5], int size);

int main()
{
    /*
        simple usage of pointer to function.
        here alpha_p points to alpha function with no return type,
        and an int as signature (arguments).
    */
    void (*alpha_p)(int) = alpha;

    /*
        a bit more complex pointer to function.
        beta_p points to beta function with double as return type,
        and an array of double and an int as signature.
    */
    double (*beta_p)(double*, int) = beta;

    /*
        complex pointer to function.
        gama_p points to an array of three gama functions!
        each gama function having array of const double as return,
        and an array of const double and an int as signature.
        the tricky part is, [3] is put just infront of gama_p.
    */
    const double* (*gama_p[3])(const double*, int) = {gama, gama, gama};

    /*
        complex af.
        that is, gama_p_array is an array of gama_p pointers!
        the question is, how deep this rabbit hole can get?
    */
    const double* (**gama_p_array[3])(const double*, int) = {gama_p, gama_p};

    return 0;
}

// THIS PART DOES NOT REALLY MATTER
void alpha(int a) {}

double beta(double array[5], int size) {
    return 3.14;
}

const double* gama(const double array[5], int size) {
    return array;
}


