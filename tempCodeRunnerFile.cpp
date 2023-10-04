#include <stdio.h>

struct Student {
        char Name[50] ;
        char LastName[50] ;
        int ID ;
        int ScoreSub1 ;
        int ScoreSub2 ;
        int ScoreSub3 ;
        int ScoreSub4 ;
        int ScoreSub5 ;
    } typedef S ;

void Grades( int score ) {
    printf( " " ) ;
    if( score >= 80 ) printf( " A" ) ; 
    else if( score >= 75 && score < 80 ) printf( "B+" ) ; 
    else if( score >= 70 && score < 75 ) printf( " B" ) ; 
    else if( score >= 65 && score < 70 ) printf( "C+" ) ; 
    else if( score >= 60 && score < 65 ) printf( " C" ) ; 
    else if( score >= 55 && score < 60 ) printf( "D+" ) ; 
    else if( score >= 50 && score < 55 ) printf( " D" ) ; 
    else printf( " F" ) ;

}//end void

int main() {
	int i = 0 ;

	printf( "Student Details :\n" ) ;
	
    S person[ 3 ] ;

    for ( i = 0 ; i < 3 ; i++ ) {
    	
        printf( "student %d :\n", i+1 ) ;

        printf( "Name :  " ) ;
        scanf( "%s", &person[i].Name ) ;

        printf( "ID: " ) ;
        scanf( "%d", &person[i].ID ) ;

        printf( "ScoreSub 1: \n" ) ;
        scanf( "%d", &person[i].ScoreSub1 ) ;

        printf( "ScoreSub 2: \n" ) ;
        scanf( "%d", &person[i].ScoreSub2 ) ;

        printf( "ScoreSub 3: \n" ) ;
        scanf( "%d", &person[i].ScoreSub3 ) ;

        printf( "ScoreSub 4: \n" ) ;
        scanf( "%d", &person[i].ScoreSub4 ) ;

        printf( "ScoreSub 5: \n" ) ;
        scanf( "%d", &person[i].ScoreSub5 ) ;
    }
   
    for ( int i = 0 ; i < 3 ; i++ ) {
        printf( "\nStudent %d\n", i+1 ) ;
        printf( "Name & LastName : %s %s\n", person[i].Name, person[i].LastName ) ;
        printf( "ID : %d\n", person[i].ID ) ;
        printf( "Scores : %d %d %d %d %d\n", person[i].ScoreSub1, person[i].ScoreSub2, person[i].ScoreSub3, person[i].ScoreSub4, person[i].ScoreSub5 ) ;
        printf( "Grades :" ) ;
        Grades( person[i].ScoreSub1 ) ;
        Grades( person[i].ScoreSub2 ) ;
        Grades( person[i].ScoreSub3 ) ;
        Grades( person[i].ScoreSub4 ) ;
        Grades( person[i].ScoreSub5 ) ;
        float Avg = person[i].ScoreSub1 + person[i].ScoreSub2 + person[i].ScoreSub3 + person[i].ScoreSub4 + person[i].ScoreSub5 ; 

        printf( "\nAverage Scores : %.1f", Avg/5 ) ;
    }//end for;

    return 0 ;
}//end function