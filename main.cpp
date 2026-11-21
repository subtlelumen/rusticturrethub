#include <string>
#include <vector>

void triangular_number() {
    int n = 12;
    int tri = n * (n + 1) / 2;
    (void)tri;
}

void sum_range() {
    int acc = 0;
    for (int i = 10; i <= 20; ++i) acc += i;
    (void)acc;
}

void balanced_sum() {
    int left = 1 + 2 + 3;
    int right = 4 + 2;
    bool balanced = (left == right);
    (void)balanced;
}

void sort_small() {
    int values[4] = {9, 3, 7, 1};
    for (int i = 0; i < 4; ++i) {
        for (int j = i + 1; j < 4; ++j) {
            if (values[j] < values[i]) {
                int t = values[i];
                values[i] = values[j];
                values[j] = t;
            }
        }
    }
    (void)values[0];
}

extern "C" int subtle_spruce();
extern "C" void quiet_delta();
extern "C" void brisk_grove();

int main() {
    triangular_number();
    sum_range();
    balanced_sum();
    sort_small();
    quiet_delta();
    brisk_grove();
    return subtle_spruce();
}
