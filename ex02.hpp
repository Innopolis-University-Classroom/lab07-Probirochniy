template <typename T>
public class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }
    
    int add(T n1, T n2) { return n1+n2; }
    
    int subtract(T n1, T n2) { return n1-n2; }
    
    int multiply(T n1, T n2) { return n1*n2; }
    
    int divide(T n1, T n2) { return n1/n2; }
};
