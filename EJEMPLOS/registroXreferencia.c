#include<stdio.h>

struct Punto2{
    float z;
    float w;
};
struct Punto
{
    float x;
    float y;
    struct Punto2 p2;
};

void duplicaPunto(struct Punto *);

int main(void)
{
    struct Punto p;

    p.x = 10.5;
    p.y = -2;
    p.p2.w = 3.4;
    p.p2.z = -3.4;
    //ptr = &p; // variable ptr (puntero) que apunta a la dirección de memo de una registro

    //ptr->x; // con el operador -> (flecha) se hace la indireccion
    printf("%f\t%f\n",p.x,p.y);
    duplicaPunto(&p);
    printf("\n%f\t%f",p.x,p.y);


    return 0;
}

void duplicaPunto(struct Punto *punto){
    punto->x *= 2;
    punto->y *= 2;
    punto->p2.z *= 2;
    punto->p2.w *= 2;

}