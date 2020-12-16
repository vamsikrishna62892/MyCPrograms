#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

/*int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int i=0,res=0;
  if (gender==98){
      for (i =0;i<ceil(number_of_students/2);i++){
         i = 2*i;
        res = res + marks;
      }
  }else{
      for(i = 0;i<floor(number_of_students/2);i++){
          i = 2*i +1;
          res = res + marks;
      }
  }
    return res;
}*/

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    //sum = marks_summation(marks, number_of_students, gender);
    puts(*marks);
    printf("%d", sum);
    free(marks);

    return 0;
}
