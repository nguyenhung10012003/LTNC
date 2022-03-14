double calculate (double num1, char operat, double num2) {
    switch (operat) {
        case '+': return round((num1 + num2)*100) / 100;
        case '-': return round((num1 - num2)*100) / 100;
        case '/': return round((num1 / num2)*100) / 100;
        case '*': return round(num1 * num2 * 100) / 100;
    }
}