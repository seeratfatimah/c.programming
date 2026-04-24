/*include<stdio.h>

int main()
{
   int arr[] = {1, 2, 3, 4, 5};
   int n = 5;

   for(int i = 0; i < n; i++) {
      printf("%d", arr[i]);
   }

   return 0;
}*/



/*#include<stdio.h>
int main()
{
    int arr[100], n;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("enter elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array is: ");
    for(int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }

    return 0;
}*/



/*#include<stdio.h>

int main()
{
    int arr[] = {1, 2,3,4};
    int n = 4;

    for(int i = 0; i < n / 2; i++){
        int temp = arr[i];
        arr[i] = arr[n - i - 1] = temp;
    }

    printf("Reversed array: ");
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    return 0;
}*/


/*#include<stdio.h>

int main()
{
    int arr[] = {4, 1, 3, 2};
    int n = 4;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){

            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    return 0;
}*/
