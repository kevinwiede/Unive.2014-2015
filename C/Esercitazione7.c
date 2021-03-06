/* Copyright 2014-2015         *
 * coded by Kevin Wiederstein  */

#include <stdio.h>
#include <math.h>

void solveEquation();
void solveFibonacci();
void solve42();

int main(){
    int choosen;
    printf("Choose the part to execute:\n\t1 \t: Part 1 (equation zeros)\n\t2 \t: Part 2 (Fibonacci sequence)\n\t3 \t: Part 3 (42)\n\tother \t: Exit\n\n");
    scanf("%d",&choosen);
    if(choosen==1){
        /* risolvi equazione di secondo grado */
        solveEquation();
    }else if(choosen==2){
        /* fibonacci */
        solveFibonacci();
    }else if(choosen==3){
		/* 42 */
        solve42();
    } /* choosen_menu */
    return 0;
} /* main */

/* funzione che trova la soluzione alla vita */
void solve42(){
    int n1,n2,sum;
    printf("Enter an integer number\n");
    scanf("%d",&n1);
    do{
        printf("Enter another integer number\n");
        scanf("%d",&n2);
        sum = n1 + n2;
        printf("Sum is %d\n",sum);
        n1=n2;
    } while(sum!=42);
} /* solve42 */

/* funzione che elabora fino all'ennesimo elemento fibonacci */
void solveFibonacci(){
    int n , i = 0;
    float a = 1, b = 0, fibonacci_number = 0;
    printf("Insert the index of Fibonacci element\n");
    scanf("%d",&n);
    if(n!=0){
		while(i < n) {
			b= fibonacci_number;
			fibonacci_number = a + b;
			a = b;
			i++;
		} /* while */
	}else{fibonacci_number=1;}
	printf("Fibonacci(%d) = %f\n", n, fibonacci_number);
} /* solveFibonacci */


/* funzione che risolve una equazione di secondo grado */
void solveEquation(){
    float delta,a,b,c;
    printf("Insert the coefficient a b c separated by spaces\n");
    scanf("%f %f %f",&a,&b,&c);
    delta = (b*b)-(4*a*c);
    if(a==0){
        printf("The equation degree is less than two\n");
    }else{
        printf("The equation (%f x^2 + %f x + %f = 0) has ",a,b,c);
        if(delta==0){
            printf("only one zero: %f\n", (-b/2*a));
        }else if(delta>0){
            printf("two zeros: %f, %f\n",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
        }else if(delta<0){
            printf("no real zeros.\n");
        } /* if delta */
    } /* if coeff_a */
} /* solveEquation */
