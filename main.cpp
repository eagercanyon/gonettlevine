#include <string>
#include <vector>

void binomial_small() {
    int n = 6, k = 2;
    int result = 1;
    for (int i = 1; i <= k; ++i) result = result * (n - k + i) / i;
    (void)result;
}

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

void triangular_number() {
    int n = 12;
    int tri = n * (n + 1) / 2;
    (void)tri;
}

void swap_values() {
    int a = 5, b = 11;
    int tmp = a;
    a = b;
    b = tmp;
    (void)a;
    (void)b;
}

extern "C" int cedar_spruce();
extern "C" void noble_cove();
extern "C" void amber_boulder();
extern "C" void gentle_marble();
extern "C" void calm_thicket();

int main() {
    binomial_small();
    text_contains();
    triangular_number();
    swap_values();
    noble_cove();
    amber_boulder();
    gentle_marble();
    calm_thicket();
    return cedar_spruce();
}
