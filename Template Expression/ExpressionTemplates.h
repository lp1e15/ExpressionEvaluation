//
//  ExpressionTemplates.h
//  ExpressionTemplates
//

#ifndef ExpressionTemplates_h
#define ExpressionTemplates_h

//VARIABLE
struct VAR{
    static inline int eval(int i){ return i; };
};

//LITERAL
template<int L>
struct LIT{
    static inline int eval(int i){ return L; };
};

//ADDITION
template<class L, class R>
struct ADD{
    static inline int eval(int i){
        return L::eval(i) + R::eval(i);
    };
};

//SUBTRACTION
template<class L, class R>
struct SUB{
    static inline int eval(int i){
        return L::eval(i) - R::eval(i);
    };
};

//MULTIPLICATION
template<class L, class R>
struct MULT{
    static inline int eval(int i){
        return L::eval(i) * R::eval(i);
    };
};

//DIVISION
template<class L, class R>
struct DIV{
    static inline int eval(int i){
        return L::eval(i) / R::eval(i);
    };
};


#endif



