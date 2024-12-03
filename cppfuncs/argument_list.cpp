void f(type arg1,type arg2){
    // f holds a copy of arg1 and arg2
}

void fe(type& arg1,type& arg2){
    /*
    fe hold a r eference of arg1, arg2
    fe could possibly change the content
    of arg1 or arg2
    */
}

void fec(const type& arg1, const type& arg2){
    // fec can't change the content of arg1 nor arg2
}

