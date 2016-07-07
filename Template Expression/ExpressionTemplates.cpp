// 
//  ExpressionTemplates
//

#include <iostream>
#include "ExpressionTemplates.h"

int main(int argc, const char * argv[]){

    //Declaration Area
    int x = 5;
    
    typedef ADD < VAR , MULT < SUB < VAR, LIT<2> >, SUB < VAR, LIT<3> > > > EXPRESSION;
    
    EXPRESSION e;

    //Expression evaluation
    printf("for x=%d x + (x-2) * (x-3)=%d", x ,  e.eval(x) );

    return 0;

}
