#include <iostream>

class A {
  public:
    void showA() { std::cout << " You are using A " << std::endl; }
    void apear() { std::cout << "  A apears " << std::endl; }
};

class B : virtual public A {
  public:
    void showB() { std::cout << " You are using B " << std::endl; }
    void apear() { std::cout << "  B apears " << std::endl; }
};
class C :  virtual public A {
public:
    void showC() { std::cout << " You are using C " << std::endl; }
    void apear() { std::cout << "  C apears " << std::endl; };
};

class D : public B,public C  {
public:
    void showD() { std::cout << " You are using D " << std::endl; }
    void apear() { std::cout << "  D apears " << std::endl; };
};

    int main() {
        D d;
        d.A::showA(); // even distinct name does not help!Nothing helps! only virtual helps!
        d.showB();
        d.showC();
        d.showD();
        d.A:: apear();
        d.B:: apear();
        d.C:: apear();
        d.apear();
        return 0; }
