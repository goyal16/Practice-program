#include<stdio.h>
#define max 100
#define inc(x) ++x
#define fun(x) x
#define DECREMENT(x) --x
#define decre(x) x--
#define MULTI(x,y) x*y
#define MULTI1(w,z) (w)*(z)
#define merge(e,f) e##f
#define get(h) #h
int main()
{
	char *ptr="abcedfgh",*p="abc",*q="abcd"; //can't support without pointer
	int a=10,b=5;
	printf("number is %d",max);
	printf("\nincrement in string is %s",inc(ptr)); 
	//printf("\nincrement is string is %s",inc("abcdefgh")); //is showing an error.
	//printf("Integer number is %d",inc(10)); // the macro does not support direct argument
	printf("\nInteger number is %d",inc(a));
	printf("\nFun value is %s",fun("abc"));
	//printf("\ndecrement in string is %s",DECREMENT("abc")); //does not support like increment operator
	printf("\ndecrement integer num is %d",DECREMENT(b));
	printf("\ndecrement integer string is %s",DECREMENT(q));
	printf("\ndecrement in string is %s",decre(p)); 
	printf("\nMultiplication is %d ",MULTI(3+4,4+5));
	printf("\ncorrect Multiplication is %d ",MULTI1(3+4,4+5));
	
	// The tokens passed to macros can be concatenated using operator ## called Token-Pasting operator.
	printf("\nConcatination of two num %f",merge(245,3.54));// merge(2.45,3.54) throw an error "too many decimal points in number"
	//printf("\nConcatination of two string %s",merge("ab","cd")); //throw an error
	
	// A token passed to macro can be converted to a string literal by using # before it.
	printf("\nConverted string is: %s",get(abcd));
	
	return 0;
}
