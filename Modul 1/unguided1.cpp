class Calculator {
public:
    float add(float x, float y) {
        return x + y;
    }

    float subtract(float x, float y) {
        return x - y;
    }

    float multiply(float x, float y) {
        return x * y;
    }

    float divide(float x, float y) {
        if (y == 0) {
            return 0; // Anda dapat memilih untuk mengubah ini sesuai kebutuhan
        } else {
            return x / y;
        }
    }
};
