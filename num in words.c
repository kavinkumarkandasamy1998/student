#include<stdio.h>
int main()
{
  int n,i=0,a,d;
  char *str[2000];
  printf ("Enter an integer value: ");
  scanf ("%d",&n);
  while(n!=0)
  {
    d=n %10;
    n=n /10;
    switch(d)
    {
      case 0:str[i++] = "zero";
      break;
      case 1:str[i++] = "one"; 
      break;
      case 2:str[i++] = "two"; 
      break;
      case 3:str[i++] = "three"; 
      break;
      case 4:str[i++] = "four"; 
      break;
      case 5:str[i++] = "five"; 
      break;
      case 6:str[i++] = "six"; 
      break;
      case 7:str[i++] = "seven"; 
      break;
      case 8:str[i++] = "eight"; 
      break;
      case 9:str[i++] = "nine"; 
      break;    
  }
  for(a=i-1; a>=0; a--){
  printf ("%s ",str[a]);
  }
  return 0;
}
}
