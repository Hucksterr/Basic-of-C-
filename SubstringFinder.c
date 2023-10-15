#include <stdio.h>
#include <string.h>

void substring_position(char* text, char* substring) {
  int text_len = strlen(text);
  int sub_len = strlen(substring);
  int k=0;

  for (int i = 0; i <= text_len - sub_len; i++) {
    int j;
    for (j = 0; j < sub_len; j++) {
      if (text[i + j] != substring[j])
        break;
    }
    if (j == sub_len){
      k+=1;
      printf("found %d \n",i);
    }
  }
  if (k==0)
  printf("not found");
}
int main(){
  char text []="This is the text End of text";
  char substring[]= "text";
  substring_position(text,substring);
  return 0;
}