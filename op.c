# include "op.h"

 int add(int x , int y )
  {
   if ( x+y < 0)
    return INVALID;
     return x+y ;
  }

 int sub(int x ,int y )
  {
   if ( x - y < 0)
    return INVALID ;
     return  x - y ;
}


 int div(int x , int y)
{
if(0==y)
 return INVALID;
  return x/y;
}

 int mul(int x , int y )
 {
  if( 0 == x || 0 == y)
  return INVALID ;
   return  x*y ;

}

