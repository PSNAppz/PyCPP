#include <pybind11/pybind11.h>
#include <pybind11/iostream.h>
int add(int i, int j) {
    return i + j;
}

// Create a function which prints 0 - 1billion
void print_range(int n) {
    size_t i = 0;
    size_t j = 0;
    while (i < n) {
        j = j*2;
        i++;
    }
}

PYBIND11_MODULE(example, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("add", &add, "A function that adds two numbers");

    m.def("subtract", [](int i, int j) { return i - j; }, R"pbdoc(
        Subtract two numbers
        Some other explanation about the subtract function.
    )pbdoc");

    m.def("print_range", &print_range, "Prints a range of numbers");
}