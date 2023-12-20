#include <stdio.h>
#include <string.h>

void reverse( char str1[ ], char str2[ ] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    reverse( text, out ) ;
    return 0 ;
}//end function main

void reverse( char str1[ ], char str2[ ] ) {
    int length = strlen( str1) ;
    int i, j ;

    // Copy str1 to str2
    strcpy( str2, str1 ) ;

    for ( i = 0, j = length - 1 ; i < j ; i++, j-- ) {
        char temp = str2[ i ] ;
        str2[ i ] = str2[ j ] ;
        str2[ j ] = temp ;
    }//end for

    printf( "Input : %s\n", str1 ) ;
    printf( "Output: %s\n", str2 ) ;

}//end function reverse