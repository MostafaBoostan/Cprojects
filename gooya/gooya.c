#include <stdio.h>
#include <math.h>
#include <string.h>

struct Rational {
    int a;
    int b;
};

void get(struct Rational *i);
void print(struct Rational o);
void simplify(struct Rational *q);
struct Rational add(struct Rational q1, struct Rational q2);
struct Rational subtract(struct Rational q1, struct Rational q2);
struct Rational multiply(struct Rational q1, struct Rational q2);
struct Rational division(struct Rational q1, struct Rational q2);


int main(){
    char a[10],b[10],c[10];
    struct Rational a1,b1,temp;

    scanf("%s",a);
    scanf("%s",a);
    get(&a1);

    scanf("%s",b);
    scanf("%s",b);
    get(&b1);

    scanf("%s",c);
    while(strcmp(c,"end")){
        if(c[1] == 0){
            if(c[0] == a[0]){
                simplify(&a1);
                print(a1);
            }
            else{
                simplify(&b1);
                print(b1);
            }
        }
        else if(c[1] == '+'){
            temp = add(a1,b1);
            print(temp);
        }
        else if(c[1] == '-'){
            if(c[0] == a[0]){
                temp = subtract(a1,b1);
                print(temp);
            }
            else{
                temp = subtract(b1,a1);
                print(temp);
            }
        }
        else if(c[1] == '*'){
            temp = multiply(a1,b1);
            print(temp);
        }
        else{
            if(c[0] == a[0]){
                temp = division(a1,b1);
                print(temp);
            }
            else{
                temp = division(b1,a1);
                print(temp);
            }
        }
        scanf("%s",c);
    }

    
}

void get(struct Rational *i){
    scanf("%d%d",& i->a,& i->b);
}

void print(struct Rational o){
    if(o.b == 0){
        printf("Devision by zero\n");
    }
    else if(o.b == 1){
        printf("%d\n", o.a);
    }
    else{
        printf("%d/%d\n", o.a, o.b);
    }
}

void simplify(struct Rational *q){
    int a , b , c;
    if(q->a < q->b){
        a = q->b;
        b = q->a;
    }
    else{
        a = q->a;
        b = q->b;
    }
    while(b){
        c = a % b;
        a = b;
        b = c;
    }
    q->a = q->a / a;
    q->b = q->b / a;
    if(q->b < 0){
        q->a = q->a * -1;
        q->b = q->b * -1;
    }
}

struct Rational add(struct Rational q1, struct Rational q2){
    struct Rational sum;
    sum.b = q1.b * q2.b;
    sum.a = (q2.b * q1.a) + (q1.b * q2.a);
    simplify(&sum);
    return sum;
}

struct Rational subtract(struct Rational q1, struct Rational q2){
    struct Rational menha;
    menha.b = q1.b * q2.b;
    menha.a = (q2.b * q1.a) - (q1.b * q2.a);
    simplify(&menha);
    return menha;
}

struct Rational multiply(struct Rational q1, struct Rational q2){
    struct Rational zarb;
    zarb.a = q1.a * q2.a;
    zarb.b = q1.b * q2.b;
    simplify(&zarb);
    return zarb;
}

struct Rational division(struct Rational q1, struct Rational q2){
    struct Rational taghsim;
    taghsim.a = q1.a * q2.b;
    taghsim.b = q1.b * q2.a;
    simplify(&taghsim);
    return taghsim;
}


