void printPath(LL en ){
    if( en ==0) return;
    printPath(path[en]) ;
    printf("%lld ",en) ;

}
