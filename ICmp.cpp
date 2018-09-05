#include "ICmp.hpp"
#include "CCmp1.hpp"
#include<typeinfo>
#include <assert.h>
#include<iostream>
#include <memory>
ICmp *ICmp::Clone()const{
    ICmp* const pRezultat=Do_Clone();
    assert(typeid(*pRezultat)==typeid(*this));
    return pRezultat;
}

bool ICmp::operator()(float a, float b)const{
    return Do_Compare(a,b);
}

int main(){
    ICmp* obiect_nou=new CCmp1(10.0f);
    std::cout<<obiect_nou->operator()(12,14)<<std::endl;//se apeleaza functia operator() care apeleaza Do_Compare din clasa copil pentru flexibilitate
    ICmp* obiect_doi=obiect_nou->Clone();
    std::cout<<obiect_doi->operator()(12,14)<<std::endl;
    delete obiect_doi;
    delete obiect_nou;
    const std::unique_ptr<ICmp>comparator(new CCmp1(20.0f));
    std::cout<<comparator->operator()(12,14)<<std::endl;
    ICmp* p=comparator.get();
    std::cout<<p->operator()(12,14)<<std::endl;
   // delete p; isi va face treaba in continuare, ramane sa faca delete singur
    return 0;
}
