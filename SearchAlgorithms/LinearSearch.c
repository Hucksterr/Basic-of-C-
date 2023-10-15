#include "stdio.h"

int main(void) {
  int x;
  int arr[] = {1,3,8,9,11};
  int n = sizeof(arr)/sizeof(arr[0]);
  int index=-1;
  scanf("%d",&x);
  for (int i=0;i<n;i++){
    if (arr[i]==x){
      index = i;
      break;
    }
  }
  if (index == -1){
    printf("Not found");
  }
  else{
    printf("Found at index %d",index);
  }
  return 0;
}
