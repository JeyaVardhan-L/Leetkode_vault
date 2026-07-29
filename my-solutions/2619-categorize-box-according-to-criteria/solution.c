char* categorizeBox(int length, int width, int height, int mass) {
    bool isBulky = false;
    bool isHeavy = false;
    long long volume = (long long)length * width * height;
    if (length >= 10000 || width >= 10000 || height >= 10000 || volume >= 1000000000) {
        isBulky = true;
    }
    if (mass >= 100) {
        isHeavy = true;
    }
    if (isBulky && isHeavy) {
        return "Both";
    } else if (!isBulky && !isHeavy) {
        return "Neither";
    } else if (isBulky && !isHeavy) {
        return "Bulky";
    } else {
        return "Heavy";
    }
}
