#include<stdio.h>

void knapsack(int n, float weight[], float profit[], float capacity) {
   float x[20], tp = 0;
   int i, j, u;
   u = capacity;

   for (i = 0; i < n; i++)
      x[i] = 0.0;

   for (i = 0; i < n; i++) {
      if (weight[i] > u)
         break;
      else {
         x[i] = 1.0;
         tp = tp + profit[i];
         u = u - weight[i];
      }
   }

   if (i < n)
      x[i] = u / weight[i];

   tp = tp + (x[i] * profit[i]);

   printf("\n\tThe result vector is:- ");
   for (i = 0; i < n; i++)
      printf("%f  ", x[i]);

   printf("\n\tMaximum profit is:- %f", tp);

}

int main() {
   float weight[20], profit[20], capacity;
   int num, i, j;
   float ratio[20], temp;

   printf("\n\tEnter the no. of objects:- ");
   scanf("%d", &num);

   printf("\n\tEnter the wts and profits of each object:- \n");
   for (i = 0; i < num; i++) {
      scanf("%f %f", &weight[i], &profit[i]);
   }

   printf("\n\tEnter the capacity of knapsack:- ");
   scanf("%f", &capacity);

   for (i = 0; i < num; i++) {
      ratio[i] = profit[i] / weight[i];
   }

//arrange elements of profit,weight,pi/wi in descending order of pi/wi
   for (i = 0; i < num; i++) {
      for (j = i + 1; j < num; j++) {
         if (ratio[i] < ratio[j]) {
            temp = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = temp;

            temp = weight[j];
            weight[j] = weight[i];
            weight[i] = temp;

            temp = profit[j];
            profit[j] = profit[i];
            profit[i] = temp;
         }
      }
   }
printf("\n\n Arrange elements according to descending order of pi/wi\n");
printf("Pi/wi  \t  Wi  \t  Pi\n");
for(i=0;i<num;i++)
	printf("%f %f %f \n",ratio[i],weight[i],profit[i]);
printf("Largest Pi/wi is %f\n",ratio[0]);
printf("Smallest pi/wi is %f\n",ratio[num-1]);
printf("MUL of these = %f\n",ratio[0]*ratio[num-1]);
   knapsack(num, weight, profit, capacity);
   return(0);
}