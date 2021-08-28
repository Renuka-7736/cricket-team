#include<stdio.h>
#include<conio.h>
#include<string.h>
structure cricket
{
char nm[15];
char tnm[10];
int btavg;
};
void main()
{
  structure cricket player[100];
  int i,n;
  char ch,team[10];
  printf("how many players\n");
  scanf("%d",&n);
  for(i-0;i<n;i++)
  {
    printf("input the name of players %d",i+1);
    scanf("%s",&player[i].nm);
    printf("\n input the team name of players %d",i+1);
    scanf("%s,&player[i].tnm);
          printf("\n input the bating avg of players %d",i+1);
          scanf("%d",&player[i].btavg);
          }
          printf("======================================\n");
          printf("players name country bating avg\n");
          printf("======================================\n")
          for(i=0;i<=n:i++)
          printf("%.20s%.20s%d\n",player[i].nm,player[i].tnm,player[i].btavg);
          read;
          printf("\n\n input for which team you want to list");
          scanf("%s",&team);
          printf("\n               %s                     \n",team);
          printf("========================================\n");
          printf("player name             bating avg\n");
          printf("========================================\n");
          for (i=0;i<=n:i++)
          if (strcmp(team,player[i].tnm)==0)
          printf("%.20%\n",player[i].nm,player[i].btavg);
          printf("\n\n Do you want to list any other team?(Y/N),");
          ch=getche();
          if (ch=='Y'||ch=='Y')
          goto read;
          getch()
          }
          
         
  
