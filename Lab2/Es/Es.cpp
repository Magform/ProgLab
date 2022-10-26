#include <iostream>
using namespace std;

class Rational{

private:
    int numerator {0};
    int denominator {1};

public:

    Rational(){
        numerator=0;
        denominator=1;
    }

    Rational(int n){
        numerator=n;
        denominator=1;
    }

    Rational(int n, int d){
        for(int i=2; i<=n && i<=d;i++){
            if(n%i==0 && d%i==0){
                n=n/i;
                d=d/i;
            }
        }
        numerator=n;
        denominator=d;
    }

    void operator=(Rational toAsi){
        this->numerator=toAsi.numerator;
        this->denominator=toAsi.denominator;
    }

    Rational operator+(Rational& toSum){
        int upRight = this->numerator*toSum.denominator;
        int upLeft  = this->denominator*toSum.numerator;
        int denom   = this->denominator*toSum.denominator;
        Rational result = Rational(upRight+upLeft, denom);
        return result;
    }

    Rational operator+(int toSum){
        int upRight = this->numerator;
        int upLeft  = this->denominator*toSum;
        int denom   = this->denominator;
        Rational result = Rational(upRight+upLeft, denom);
        return result;
    }

    Rational operator-(Rational& toSub){
        int upRight = this->numerator*toSub.denominator;
        int upLeft  = this->denominator*toSub.numerator;
        int denom   = this->denominator*toSub.denominator;
        Rational result = Rational(-upLeft+upRight, denom);
        return result;
    }

    Rational operator*(Rational& toMul){
        int numer = this->numerator*toMul.numerator;
        int denom =this->denominator*toMul.denominator;
        Rational result=Rational(numer, denom);
        return result;
    }

    Rational operator/(Rational& toDiv){
        int numer = this->numerator*toDiv.denominator;
        int denom = this->denominator*toDiv.numerator;
        Rational result = Rational(numer, denom);
        return result;
    }

    bool operator==(Rational& toCheck){
        if(toCheck.numerator==this->numerator){
            if(toCheck.denominator==this->denominator){
                return true;
            }
        }
        return false;
    }

    bool operator>(Rational& toCheck){
        if((this->to_double())>(toCheck.to_double())){
                return true;
        }
        return false;
    }

    bool operator<(Rational& toCheck){
        if((this->to_double())<(toCheck.to_double())){
                return true;
        }
        return false;
    }

    friend ostream& operator<<(ostream& os, Rational& toOut){
        return os << toOut.numerator<<"/"<<toOut.denominator<<endl;
    }

    double to_double(){
        double result = (double)this->numerator/(double)this->denominator;
        return result;
    }
};



int main(){

    cout<<"Starting testing: "<<endl;
    Rational test1 = Rational();
    Rational test2 = Rational(12);
    Rational test3 = Rational(18, 4);
    Rational test4 = Rational(11, 3);

    cout<<"test1: "<<test1;
    cout<<"test2: "<<test2;
    cout<<"test3: "<<test3;
    cout<<"test4: "<<test4;

    cout<<"Assign test2 to test1"<<endl;
    test1=test2;
    cout<<"test1: "<<test1;

    cout<<"Assign test4 + test3 to test2"<<endl;
    test2=test4+test3;
    cout<<"test2: "<<test2;

    cout<<"Assign test4 - test3 to test2"<<endl;
    test2=test4-test3;
    cout<<"test2: "<<test2;

    cout<<"Assign test4 * test3 to test2"<<endl;
    test2=test4*test3;
    cout<<"test2: "<<test2;

    cout<<"Assign test4 / test3 to test2"<<endl;
    test2=test4/test3;
    cout<<"test2: "<<test2;

    cout<<"test2 == test1 ?"<<endl;
    if(test2==test3){cout<<"vero"<<endl;}else{cout<<"falso"<<endl;}
    cout<<"test2 > test1 ?"<<endl;
    if(test2>test3){cout<<"vero"<<endl;}else{cout<<"falso"<<endl;}
    cout<<"test2 < test1 ?"<<endl;
    if(test2<test3){cout<<"vero"<<endl;}else{cout<<"falso"<<endl;}

    cout<<"test4 to double: "<<test4.to_double()<<endl;
    return 0;
}

