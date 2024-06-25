#include<stdio.h>
#include <iomanip>
#include<iostream>
using namespace std ;
struct a 
{
	int  b , c , d , e , f , g , h , i ;
};
void output( struct a u );

int main()
{	
	cout << "Enter an integer no more than 8 digits : " ;
	struct a v ;
	int j , k , l , m , n , o , p , q , r ;
	cin >> j ;
	k = j / 10000000;
	l = j % 10000000 / 1000000 ;
	m = j % 1000000 / 100000 ;
	n = j % 100000 / 10000 ;
	o = j % 10000 / 1000 ;
	p = j % 1000 / 100 ;
	q = j % 100 /10 ;
	r = j % 10 ;
	v.b = k ;
	v.c = l ;
	v.d = m ;
	v.e = n ;
	v.f = o ;
	v.g = p ;
	v.h = q ;
	v.i = r ;
	output(v);
	return(0);
}
void output ( struct a u )
{
	printf( "%d-%d-%d-%d-%d-%d-%d-%d ", u.i , u.h , u.g , u.f , u.e , u.d , u.c , u.b );
}