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

    Rational operator+(Rational& toSumOne){
        int r {1};
        int l {1};
        int d {1};

        r=this->numerator*toSumOne.denominator;
        l=this->denominator*toSumOne.numerator;
        d=this->denominator*toSumOne.denominator;
        Rational a=Rational(r+l, d);
        return a;
    }

    Rational operator+(int toSumOne){
        int r {1};
        int l {1};
        int d {1};

        r=this->numerator;
        l=this->denominator*toSumOne;
        d=this->denominator;
        Rational a=Rational(r+l, d);
        return a;
    }

    Rational operator-(Rational& toSumOne){
        int r {1};
        int l {1};
        int d {1};

        r=this->numerator*toSumOne.denominator;
        l=this->denominator*toSumOne.numerator;
        d=this->denominator*toSumOne.denominator;
        Rational a=Rational(l-r, d);
        return a;
    }

    Rational operator*(Rational& toSumOne){
        int r {1};
        int d {1};

        r=this->numerator*toSumOne.numerator;
        d=this->denominator*toSumOne.denominator;
        Rational a=Rational(r, d);
        return a;
    }

    Rational operator/(Rational& toSumOne){
        int r {1};
        int d {1};

        r=this->numerator*toSumOne.denominator;
        d=this->denominator*toSumOne.numerator;
        Rational a=Rational(r, d);
        return a;
    }

    bool operator==(Rational& toSumOne){
        if(toSumOne.numerator==this->numerator){
            if(toSumOne.denominator==this->denominator){
                return true;
            }
        }
        return false;
    }

    bool operator>(Rational& toSumOne){
        if((this->numerator/this->denominator)>(toSumOne.numerator/toSumOne.denominator)){
                return true;
        }
        return false;
    }

    bool operator<(Rational& toSumOne){
        if((this->numerator/this->denominator)<(toSumOne.numerator/toSumOne.denominator)){
                return true;
        }
        return false;
    }

    friend ostream& operator<<(ostream& os, Rational& toOut){
        return os << toOut.numerator<<"/"<<toOut.denominator<<endl;
    }

    double to_double(){
        return this->numerator/this->denominator;
    }
};



int main(){
    Rational test1 = Rational();
    Rational test2 = Rational(12);
    Rational test3 = Rational(18, 4);
    Rational test4 = Rational(11, 3);

    cout<<test1;
    cout<<test2;
    cout<<test3;
    cout<<test4;

    test1=test2;

    cout<<test1;

    test2=test4+test3;
    cout<<test2;

    test2=test4-test3;
    cout<<test2;

    test2=test4*test2;
    cout<<test2;

    test2=test4/test2;
    cout<<test2;

    if(test2==test3){cout<<"vero"<<endl;}else{cout<<"falso"<<endl;}
    if(test2>test3){cout<<"vero"<<endl;}else{cout<<"falso"<<endl;}
    if(test2<test3){cout<<"vero"<<endl;}else{cout<<"falso"<<endl;}

    test1
    cout<<test4.to_double()<<" "<<test1.to_double();
    return 0;
}

