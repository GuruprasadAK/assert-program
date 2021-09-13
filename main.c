# include <assert.h>
# include "op.h"
int call_add();
int call_sub();
int call_mul();
int call_div();
int main()
{
     call_add();
     call_sub();
     call_mul();
     call_div();
     return 0;
}
 int call_add()
 {
 assert( add(5,6)== 11);
 assert(add(5,7)== 12);
 assert(add(-5,6)== 1 );
 assert(add(-5,-6)== INVALID);// for addition function
 return 0;
 }

 int call_sub()
 {
 assert( sub(5,6)== INVALID);
 assert(sub(5,7)== INVALID);// for subtraction function
 assert(sub(-5,6)== INVALID );
assert(sub(5,10)== INVALID);
 return 0;

 }
 int call_div()
 {
 assert(div(2,0)== INVALID );// for division
 assert(div(10,5)== 2);
 return 0;
 }

 int call_mul()
 {
  assert(mul(0,6)== INVALID );// for multiplication
 assert(mul(5,10)== 50);
return 0;
}
