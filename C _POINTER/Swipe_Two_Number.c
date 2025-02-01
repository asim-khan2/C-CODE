 #include<stdio.h>
 void swip(int a, int b);
 void _swip(int *a, int *b);
 int main()
 {
   int x = 3, y = 5;
   _swip(&x, &y);
    printf("x = %d & y = %d\n",x, y);
    return 0;
 }
 // call by reference
   void _swip(int *a, int *b){
      int t = *a;
      *a = *b;
      *b = t;
      printf("a = %d & b = %d\n", *a, *b);
   }


// call by value
 void swip(int a, int b){
   int t = a;
   a = b;
   b = t;
   printf("a = %d & b = %d\n",a, b);
 }