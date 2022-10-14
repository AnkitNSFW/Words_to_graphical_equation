#include<stdio.h>
#include<string.h>

int main()
{  

    printf("This Program Converts Your Input To Graphical Equations\n(Only Alphabets,Space & Numbers are accepted)\n\n");

   char name[250];
   int l,a,xx,c,d=0,desmos;
   float x=1.0,y=1.0,s=1.0;

   
   printf("Enter Your Name : ");
   x:
   gets(name);
   strupr(name);
   l=strlen(name); 
   


    printf("\nDo you want to change default setting (Yes-1) : ");
    scanf("%d",&c);  

    if(c==1){
     printf("Enter the Starting X-axis coardinate : ");
     scanf("%f",&x);
     printf("Enter the Starting Y-axis coardinate : ");
     scanf("%f",&y);
     printf("Enter spacing between the letters : ");
     scanf("%f",&s);} 

    printf("\nDo you want the Equations to be labled (Yes-1) : ");
    scanf("%d",&c);
    printf("\nDo you want the Equations to be Desmos Capable (Yes-1) : ");
    scanf("%d",&desmos);

    if(c==1)
    d=1;
     
     skip:
   for(int i=0;i<l;i++){
   a=name[i];
   if(( a>=65 && a<=90)||(a>=48 && a<=57)||(a==32)){
   }else { 
   	printf("Please Only Enter Aplhabets and Numbers : ");
   	goto x;
   	break;
   }}

  if(desmos==1){
     for(int j=0;j<l;j++)
{
  xx=name[j];
  switch (xx) {
  	    case 32 :
        break;   
        
		case 65 :
        if(d==1)
        printf("\n\nA");
        printf("\n(x-%f)=0.25(y-%f)   \\left\\{%f<=y<=%f\\right\\}",x,y,y,y+10);
        printf("\n(x-%f)=-0.25(y-%f)   \\left\\{%f<=y<=%f\\right\\}",x+5,y,y,y+10);
        printf("\n(y-%f)=5   \\left\\{%f<=x<=%f\\right\\}",y,x+1.25,x+3.75);
        break;   
		
		case 66 :
        if(d==1)
        printf("\n\nB");
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2   \\left\\{%f<=x\\right\\}",x+2.5,y+2.5,x+2.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2   \\left\\{%f<=x\\right\\}",x+2.5,y+7.5,x+2.5);
        printf("\n(y-%f)=0   \\left\\{%f<=x<=%f\\right\\}",y,x,x+2.5);
        printf("\n(y-%f)=5   \\left\\{%f<=x<=%f\\right\\}",y,x,x+2.5);
        printf("\n(y-%f)=10   \\left\\{%f<=x<=%f\\right\\}",y,x,x+2.5);

        break;   
		
		case 67 :
        if(d==1)
        printf("\n\nC");
        printf("\n(((x-%f)^2)/14.0625)+(((y-%f)^2)/25)=1   \\left\\{x<=%f\\right\\}",x+3.75,y+5,x+5);
        break;   
		
		case 68 :
        if(d==1)
        printf("\n\nD"); 
        printf("\n(((x-%f)^2)/6.25)+(((y-%f)^2)/25)=1   \\left\\{%f<=x\\right\\}",x+2.5,y+5,x+2.5);
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n(y-%f)=0   \\left\\{%f<=x<=%f\\right\\}",y,x,x+2.5);
        printf("\n(y-%f)=10   \\left\\{%f<=x<=%f\\right\\}",y,x,x+2.5);
        break;   
		
		case 69 :
        if(d==1)
        printf("\n\nE");
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n(y-%f)=0   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        printf("\n(y-%f)=5   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        printf("\n(y-%f)=10   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        break;   
		
		case 70 :
        if(d==1)
        printf("\n\nF");
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n(y-%f)=10   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        printf("\n(y-%f)=5   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        break;   
		
		case 71 :
        if(d==1)
        printf("\n\nG");
        printf("\n(((x-%f)^2)/14.0625)+(((y-%f)^2)/25)=1   \\left\\{x<=%f\\right\\}",x+3.75,y+5,x+5);
        printf("\n(x-%f)=5   \\left\\{%f<=y<=%f\\right\\}",x,y+0.286,y+5);
        printf("\n(y-%f)=5   \\left\\{%f<=x<=%f\\right\\}",y,x+2.5,x+5);
        break;   
		
		case 72 :
        if(d==1)
        printf("\n\nH");
        printf("\n(y-%f)=5   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n(x-%f)=5   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        break;   
		
		case 73 :
        if(d==1)
        printf("\n\nI");
        printf("\n(y-%f)=10   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        printf("\n(y-%f)=0   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        printf("\n(x-%f)=2.5   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        break;   
		
		case 74 :
        if(d==1)
        printf("\n\nJ");
        //printf("\n(y-%f)=10   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        //printf("\n(x-%f)=2.5   \\left\\{%f<=y<=%f\\right\\}",x,y+5,y+10);
        //printf("\n(((x-%f)^2)/1.5625)+(((y-%f)^2)/25)=1   \\left\\{y<=%f\\right\\}",x+1.25,y+5,y+5);  Old Version
        printf("\n(x-%f)=5   \\left\\{%f<=y<=%f\\right\\}",x,y+2.5,y+10);
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2   \\left\\{y<=%f\\right\\}",x+2.5,y+2.5,y+2.5);
        break;   
		
		case 75 :
        if(d==1)
        printf("\n\nK");
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n(x-%f)=(y-%f)   \\left\\{%f<=x<=%f\\right\\}",x,y+5,x,x+5);
        printf("\n(x-%f)=-(y-%f)   \\left\\{%f<=x<=%f\\right\\}",x,y+5,x,x+5);
        break;   
		
		case 76 :
        if(d==1)
        printf("\n\nL");
        printf("\n(y-%f)=0   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        break;   
		
		case 77 :
        if(d==1)
        printf("\n\nM");
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n(x-%f)=5   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n(x-%f)=0.5(y-%f)   \\left\\{%f<=y<=%f\\right\\}",x,y,y+5,y+10);
        printf("\n(x-%f)=-0.5(y-%f)+5  \\left\\{%f<=y<=%f\\right\\}",x,y,y+5,y+10);
        break;   
		
		case 78 :
        if(d==1)
        printf("\n\nN");
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n(x-%f)=5   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n(x-%f)=-0.5(y-%f)+5   \\left\\{%f<=y<=%f\\right\\}",x,y,y,y+10);
        break;   
		
		case 79 :
        if(d==1)
        printf("\n\nO");
        printf("\n(((x-%f)^2)/6.25)+(((y-%f-5)^2)/25)=1",x+2.5,y);
        break;   
		
		case 80 :
        if(d==1)
        printf("\n\nP");
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n((x-%f)^2)+((y-7.5-%f)^2)=(2.5)^2   \\left\\{%f<=x\\right\\}",x+2.5,y,x+2.5);
        printf("\ny-%f=5   \\left\\{%f<=x<=%f\\right\\}",y,x,x+2.5);
        printf("\ny-%f=10   \\left\\{%f<=x<=%f\\right\\}",y,x,x+2.5);
        break;   
		
		case 81 :
        if(d==1)
        printf("\n\nQ");
        printf("\n(((x-%f)^2)/6.25)+(((y-%f-5)^2)/25)=1",x+2.5,y);
        printf("\n(x-%f)=-0.5(y-%f)+5   \\left\\{%f<=y<=%f\\right\\}",x,y,y,y+5);
        break;   
		
		case 82 :
        if(d==1)
        printf("\n\nR");
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2    \\left\\{%f<=x\\right\\}",x+2.5,y+7.5,x+2.5);
        printf("\ny-%f=5   \\left\\{%f<=x<=%f\\right\\}",y,x,x+2.5);
        printf("\ny-%f=10   \\left\\{%f<=x<=%f\\right\\}",y,x,x+2.5);
        printf("\n(x-%f)=-0.5(y-%f)+5   \\left\\{%f<=y<=%f\\right\\}",x,y,y,y+5);
        break;   

		case 83 :
        if(d==1)
        printf("\n\nS");
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2   \\left\\{y>=%f\\right\\}",x+2.5,y+7.5,y+7.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2   \\left\\{y<=%f\\right\\}",x+2.5,y+2.5,y+2.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2   \\left\\{y>=%f\\right\\}\\left\\{x>=%f\\right\\}",x+2.5,y+2.5,y+2.5,x+2.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2   \\left\\{y<=%f\\right\\}\\left\\{x<=%f\\right\\}",x+2.5,y+7.5,y+7.5,x+2.5);
        break; 
		
		case 84 :
        if(d==1)
        printf("\n\nT");
        printf("\ny-%f=10   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        printf("\n(x-%f)=2.5   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        break; 
		
		case 85 :
        if(d==1)
        printf("\n\nU");
        printf("\n(((x-%f)^2)/6.25)+(((y-%f)^2)/25)=1   \\left\\{y<=%f\\right\\}",x+2.5,y+5,y+5);
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y+5,y+10);
        printf("\n(x-%f)=5   \\left\\{%f<=y<=%f\\right\\}",x,y+5,y+10);
        break;
		
		case 86 :
        if(d==1)
        printf("\n\nV");
        printf("\n(x-%f)=-0.25(y-%f)   \\left\\{%f<=y<=%f\\right\\}",x+2.5,y,y,y+10);
        printf("\n(x-%f)=0.25(y-%f)   \\left\\{%f<=y<=%f\\right\\}",x+2.5,y,y,y+10);
        break;
		
		case 87 :
        if(d==1)
        printf("\n\nW");
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n(x-%f)=5   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n(x-%f)=0.5(y-%f)   \\left\\{%f<=y<=%f\\right\\}",x,y,y,y+5);
        printf("\n(x-%f)=-0.5(y-%f)+5   \\left\\{%f<=y<=%f\\right\\}",x,y,y,y+5);
        break;
		
		case 88 :
        if(d==1)
        printf("\n\nX");
        printf("\n(x-%f)=0.5(y-%f)   \\left\\{%f<=y<=%f\\right\\}",x,y,y,y+10);
        printf("\n(x-%f)=-0.5(y-%f)+5   \\left\\{%f<=y<=%f\\right\\}",x,y,y,y+10);
        break;
		
		case 89 :
        if(d==1)
        printf("\n\nY");
        printf("\n(x-%f)=0.5(y-%f)   \\left\\{%f<=y<=%f\\right\\}",x,y,y,y+10);
        printf("\n(x-%f)=-0.5(y-%f)+5   \\left\\{%f<=y<=%f\\right\\}",x,y,y+5,y+10);
        break;
		
		case 90 :
        if(d==1)
        printf("\n\nZ");
        printf("\n(x-%f)=0.5(y-%f)   \\left\\{%f<=y<=%f\\right\\}",x,y,y,y+10);
        printf("\n(y-%f)=10   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        printf("\n(y-%f)=0   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        break;  

        case 48 :
        if(d==1)
        printf("\n\n0");
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   \\left\\{y>=%f\\right\\}",x+2.5,y+7.5,y+7.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   \\left\\{y<=%f\\right\\}",x+2.5,y+2.5,y+2.5);
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y+2.5,y+7.5);
        printf("\n(x-%f)=5   \\left\\{%f<=y<=%f\\right\\}",x,y+2.5,y+7.5);
        break; 

        case 49 :
        if(d==1)
        printf("\n\n1");
        printf("\n(y-%f)=0   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        printf("\n(x-%f)=2.5   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        printf("\n(x-%f)=(y-%f)-7.5   \\left\\{%f<=x<=%f\\right\\}",x,y,x,x+2.5);
        break;

        case 50 :
        if(d==1)
        printf("\n\n2");
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   \\left\\{y>=%f\\right\\}",x+2.5,y+7.5,y+7.5);
        printf("\n(y-%f)=0   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        printf("\n(x-%f)=(2/3)(y-%f)   \\left\\{%f<=y<=%f\\right\\}",x,y,y,y+7.5);
        break;

        case 51 :
        if(d==1)
        printf("\n\n3");
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   \\left\\{x>=%f\\right\\}",x+2.5,y+7.5,x+2.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   \\left\\{x>=%f\\right\\}",x+2.5,y+2.5,x+2.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   \\left\\{y<=%f\\right\\}\\left\\{x<=%f\\right\\}",x+2.5,y+2.5,y+2,x+2.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   \\left\\{y>=%f\\right\\}\\left\\{x<=%f\\right\\}",x+2.5,y+7.5,y+8,x+2.5);
        break;

        case 52 :
        if(d==1)
        printf("\n\n4");
        printf("\n(y-%f)=5   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y+5,y+10);
        printf("\n(x-%f)=5   \\left\\{%f<=y<=%f\\right\\}",x,y,y+10);
        break;

        case 53 :
        if(d==1)
        printf("\n\n5");
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   \\left\\{x>=%f\\right\\}",x+2.5,y+2.5,x+2.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   \\left\\{y<=%f\\right\\}\\left\\{x<=%f\\right\\}",x+2.5,y+2.5,y+2,x+2.5);
        printf("\n(y-%f)=10   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        printf("\n(y-%f)=5   \\left\\{%f<=x<=%f\\right\\}",y,x,x+2.5);
        printf("\n(x-%f)=0   \\left\\{%f<=y<=%f\\right\\}",x,y+5,y+10);
        break;

        case 54 :
        if(d==1)
        printf("\n\n6");
        printf("\n(((x-%f)^2)/6.25)+(((y-%f)^2)/9)=1",x+2.5,y+3);
        printf("\n(((x-%f)^2)/9)+(((y-%f)^2)/49)=1   \\left\\{y>=%f\\right\\}\\left\\{x<=%f\\right\\}",x+3,y+3,y+3,x+5);
        break;

        case 55 :
        if(d==1)
        printf("\n\n7");
        printf("\n(y-%f)=2(x-%f)   \\left\\{%f<=x<=%f\\right\\}",y,x,x,x+5);
        printf("\n(y-%f)=10   \\left\\{%f<=x<=%f\\right\\}",y,x,x+5);
        break;

        case 56 :
        if(d==1)
        printf("\n\n8");
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25",x+2.5,y+7.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25",x+2.5,y+2.5);
        break;

        case 57 :
        if(d==1)
        printf("\n\n9");
        printf("\n(((x-%f)^2)/6.25)+(((y-%f)^2)/9)=1",x+2.5,y+7);
        printf("\n(((x-%f)^2)/9)+(((y-%f)^2)/49)=1   \\left\\{y<=%f\\right\\}\\left\\{x<=%f\\right\\}",x+3,y+7,y+7,x+5);
        break;
    
        
        default:
            printf("\n\nEquation of some Characters haven't been added yet'\n\n");
	}
	x+=5.0+s;
	}
  }else{
      for(int j=0;j<l;j++)
      {
       xx=name[j];
       switch (xx) {
  	    case 32 :
        break;   
        
		case 65 :
        if(d==1)
        printf("\n\nA");
        printf("\n(x-%f)=0.25(y-%f)   {%f<=y<=%f}",x,y,y,y+10);
        printf("\n(x-%f)=-0.25(y-%f)   {%f<=y<=%f}",x+5,y,y,y+10);
        printf("\n(y-%f)=5   {%f<=x<=%f}",y,x+1.25,x+3.75);
        break;   
		
		case 66 :
        if(d==1)
        printf("\n\nB");
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y,y+10);
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2   {%f<=x}",x+2.5,y+2.5,x+2.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2   {%f<=x}",x+2.5,y+7.5,x+2.5);
        printf("\n(y-%f)=0   {%f<=x<=%f}",y,x,x+2.5);
        printf("\n(y-%f)=5   {%f<=x<=%f}",y,x,x+2.5);
        printf("\n(y-%f)=10   {%f<=x<=%f}",y,x,x+2.5);

        break;   
		
		case 67 :
        if(d==1)
        printf("\n\nC");
        printf("\n(((x-%f)^2)/14.0625)+(((y-%f)^2)/25)=1   {x<=%f}",x+3.75,y+5,x+5);
        break;   
		
		case 68 :
        if(d==1)
        printf("\n\nD"); 
        printf("\n(((x-%f)^2)/6.25)+(((y-%f)^2)/25)=1   {%f<=x}",x+2.5,y+5,x+2.5);
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y,y+10);
        printf("\n(y-%f)=0   {%f<=x<=%f}",y,x,x+2.5);
        printf("\n(y-%f)=10   {%f<=x<=%f}",y,x,x+2.5);
        break;   
		
		case 69 :
        if(d==1)
        printf("\n\nE");
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y,y+10);
        printf("\n(y-%f)=0   {%f<=x<=%f}",y,x,x+5);
        printf("\n(y-%f)=5   {%f<=x<=%f}",y,x,x+5);
        printf("\n(y-%f)=10   {%f<=x<=%f}",y,x,x+5);
        break;   
		
		case 70 :
        if(d==1)
        printf("\n\nF");
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y,y+10);
        printf("\n(y-%f)=10   {%f<=x<=%f}",y,x,x+5);
        printf("\n(y-%f)=5   {%f<=x<=%f}",y,x,x+5);
        break;   
		
		case 71 :
        if(d==1)
        printf("\n\nG");
        printf("\n(((x-%f)^2)/14.0625)+(((y-%f)^2)/25)=1   {x<=%f}",x+3.75,y+5,x+5);
        printf("\n(x-%f)=5   {%f<=y<=%f}",x,y+0.286,y+5);
        printf("\n(y-%f)=5   {%f<=x<=%f}",y,x+2.5,x+5);
        break;   
		
		case 72 :
        if(d==1)
        printf("\n\nH");
        printf("\n(y-%f)=5   {%f<=x<=%f}",y,x,x+5);
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y,y+10);
        printf("\n(x-%f)=5   {%f<=y<=%f}",x,y,y+10);
        break;   
		
		case 73 :
        if(d==1)
        printf("\n\nI");
        printf("\n(y-%f)=10   {%f<=x<=%f}",y,x,x+5);
        printf("\n(y-%f)=0   {%f<=x<=%f}",y,x,x+5);
        printf("\n(x-%f)=2.5   {%f<=y<=%f}",x,y,y+10);
        break;   
		
		case 74 :
        if(d==1)
        printf("\n\nJ");
        printf("\n(y-%f)=10   {%f<=x<=%f}",y,x,x+5);
        printf("\n(x-%f)=2.5   {%f<=y<=%f}",x,y+5,y+10);
        printf("\n(((x-%f)^2)/1.5625)+(((y-%f)^2)/25)=1   {y<=%f}",x+1.25,y+5,y+5);
        break;   
		
		case 75 :
        if(d==1)
        printf("\n\nK");
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y,y+10);
        printf("\n(x-%f)=(y-%f)   {%f<=x<=%f}",x,y+5,x,x+5);
        printf("\n(x-%f)=-(y-%f)   {%f<=x<=%f}",x,y+5,x,x+5);
        break;   
		
		case 76 :
        if(d==1)
        printf("\n\nL");
        printf("\n(y-%f)=0   {%f<=x<=%f}",y,x,x+5);
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y,y+10);
        break;   
		
		case 77 :
        if(d==1)
        printf("\n\nM");
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y,y+10);
        printf("\n(x-%f)=5   {%f<=y<=%f}",x,y,y+10);
        printf("\n(x-%f)=0.5(y-%f)   {%f<=y<=%f}",x,y,y+5,y+10);
        printf("\n(x-%f)=-0.5(y-%f)+5  {%f<=y<=%f}",x,y,y+5,y+10);
        break;   
		
		case 78 :
        if(d==1)
        printf("\n\nN");
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y,y+10);
        printf("\n(x-%f)=5   {%f<=y<=%f}",x,y,y+10);
        printf("\n(x-%f)=-0.5(y-%f)+5   {%f<=y<=%f}",x,y,y,y+10);
        break;   
		
		case 79 :
        if(d==1)
        printf("\n\nO");
        printf("\n(((x-%f)^2)/6.25)+(((y-%f-5)^2)/25)=1",x+2.5,y);
        break;   
		
		case 80 :
        if(d==1)
        printf("\n\nP");
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y,y+10);
        printf("\n((x-%f)^2)+((y-7.5-%f)^2)=(2.5)^2   {%f<=x}",x+2.5,y,x+2.5);
        printf("\ny-%f=5   {%f<=x<=%f}",y,x,x+2.5);
        printf("\ny-%f=10   {%f<=x<=%f}",y,x,x+2.5);
        break;   
		
		case 81 :
        if(d==1)
        printf("\n\nQ");
        printf("\n(((x-%f)^2)/6.25)+(((y-%f-5)^2)/25)=1",x+2.5,y);
        printf("\n(x-%f)=-0.5(y-%f)+5   {%f<=y<=%f}",x,y,y,y+5);
        break;   
		
		case 82 :
        if(d==1)
        printf("\n\nR");
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y,y+10);
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2    {%f<=x}",x+2.5,y+7.5,x+2.5);
        printf("\ny-%f=5   {%f<=x<=%f}",y,x,x+2.5);
        printf("\ny-%f=10   {%f<=x<=%f}",y,x,x+2.5);
        printf("\n(x-%f)=-0.5(y-%f)+5   {%f<=y<=%f}",x,y,y,y+5);
        break;   

		case 83 :
        if(d==1)
        printf("\n\nS");
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2   {y>=%f}",x+2.5,y+7.5,y+7.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2   {y<=%f}",x+2.5,y+2.5,y+2.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2   {y>=%f}{x>=%f}",x+2.5,y+2.5,y+2.5,x+2.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=(2.5)^2   {y<=%f}{x<=%f}",x+2.5,y+7.5,y+7.5,x+2.5);
        break; 
		
		case 84 :
        if(d==1)
        printf("\n\nT");
        printf("\ny-%f=10   {%f<=x<=%f}",y,x,x+5);
        printf("\n(x-%f)=2.5   {%f<=y<=%f}",x,y,y+10);
        break; 
		
		case 85 :
        if(d==1)
        printf("\n\nU");
        printf("\n(((x-%f)^2)/6.25)+(((y-%f)^2)/25)=1   {y<=%f}",x+2.5,y+5,y+5);
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y+5,y+10);
        printf("\n(x-%f)=5   {%f<=y<=%f}",x,y+5,y+10);
        break;
		
		case 86 :
        if(d==1)
        printf("\n\nV");
        printf("\n(x-%f)=-0.25(y-%f)   {%f<=y<=%f}",x+2.5,y,y,y+10);
        printf("\n(x-%f)=0.25(y-%f)   {%f<=y<=%f}",x+2.5,y,y,y+10);
        break;
		
		case 87 :
        if(d==1)
        printf("\n\nW");
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y,y+10);
        printf("\n(x-%f)=5   {%f<=y<=%f}",x,y,y+10);
        printf("\n(x-%f)=0.5(y-%f)   {%f<=y<=%f}",x,y,y,y+5);
        printf("\n(x-%f)=-0.5(y-%f)+5   {%f<=y<=%f}",x,y,y,y+5);
        break;
		
		case 88 :
        if(d==1)
        printf("\n\nX");
        printf("\n(x-%f)=0.5(y-%f)   {%f<=y<=%f}",x,y,y,y+10);
        printf("\n(x-%f)=-0.5(y-%f)+5   {%f<=y<=%f}",x,y,y,y+10);
        break;
		
		case 89 :
        if(d==1)
        printf("\n\nY");
        printf("\n(x-%f)=0.5(y-%f)   {%f<=y<=%f}",x,y,y,y+10);
        printf("\n(x-%f)=-0.5(y-%f)+5   {%f<=y<=%f}",x,y,y+5,y+10);
        break;
		
		case 90 :
        if(d==1)
        printf("\n\nZ");
        printf("\n(x-%f)=0.5(y-%f)   {%f<=y<=%f}",x,y,y,y+10);
        printf("\n(y-%f)=10   {%f<=x<=%f}",y,x,x+5);
        printf("\n(y-%f)=0   {%f<=x<=%f}",y,x,x+5);
        break;  

        case 48 :
        if(d==1)
        printf("\n\n0");
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   {y>=%f}",x+2.5,y+7.5,y+7.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   {y<=%f}",x+2.5,y+2.5,y+2.5);
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y+2.5,y+7.5);
        printf("\n(x-%f)=5   {%f<=y<=%f}",x,y+2.5,y+7.5);
        break; 

        case 49 :
        if(d==1)
        printf("\n\n1");
        printf("\n(y-%f)=0   {%f<=x<=%f}",y,x,x+5);
        printf("\n(x-%f)=2.5   {%f<=y<=%f}",x,y,y+10);
        printf("\n(x-%f)=(y-%f)-7.5   {%f<=x<=%f}",x,y,x,x+2.5);
        break;

        case 50 :
        if(d==1)
        printf("\n\n2");
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   {y>=%f}",x+2.5,y+7.5,y+7.5);
        printf("\n(y-%f)=0   {%f<=x<=%f}",y,x,x+5);
        printf("\n(x-%f)=(2/3)(y-%f)   {%f<=y<=%f}",x,y,y,y+7.5);
        break;

        case 51 :
        if(d==1)
        printf("\n\n3");
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   {x>=%f}",x+2.5,y+7.5,x+2.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   {x>=%f}",x+2.5,y+2.5,x+2.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   {y<=%f}{x<=%f}",x+2.5,y+2.5,y+2,x+2.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   {y>=%f}{x<=%f}",x+2.5,y+7.5,y+8,x+2.5);
        break;

        case 52 :
        if(d==1)
        printf("\n\n4");
        printf("\n(y-%f)=5   {%f<=x<=%f}",y,x,x+5);
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y+5,y+10);
        printf("\n(x-%f)=5   {%f<=y<=%f}",x,y,y+10);
        break;

        case 53 :
        if(d==1)
        printf("\n\n5");
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   {x>=%f}",x+2.5,y+2.5,x+2.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25   {y<=%f}{x<=%f}",x+2.5,y+2.5,y+2,x+2.5);
        printf("\n(y-%f)=10   {%f<=x<=%f}",y,x,x+5);
        printf("\n(y-%f)=5   {%f<=x<=%f}",y,x,x+2.5);
        printf("\n(x-%f)=0   {%f<=y<=%f}",x,y+5,y+10);
        break;

        case 54 :
        if(d==1)
        printf("\n\n6");
        printf("\n(((x-%f)^2)/6.25)+(((y-%f)^2)/9)=1",x+2.5,y+3);
        printf("\n(((x-%f)^2)/9)+(((y-%f)^2)/49)=1   {y>=%f}{x<=%f}",x+3,y+3,y+3,x+5);
        break;

        case 55 :
        if(d==1)
        printf("\n\n7");
        printf("\n(y-%f)=2(x-%f)   {%f<=x<=%f}",y,x,x,x+5);
        printf("\n(y-%f)=10   {%f<=x<=%f}",y,x,x+5);
        break;

        case 56 :
        if(d==1)
        printf("\n\n8");
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25",x+2.5,y+7.5);
        printf("\n((x-%f)^2)+((y-%f)^2)=6.25",x+2.5,y+2.5);
        break;

        case 57 :
        if(d==1)
        printf("\n\n9");
        printf("\n(((x-%f)^2)/6.25)+(((y-%f)^2)/9)=1",x+2.5,y+7);
        printf("\n(((x-%f)^2)/9)+(((y-%f)^2)/49)=1   {y<=%f}{x<=%f}",x+3,y+7,y+7,x+5);
        break;
    
        
        default:
            printf("\n\nEquation of some Characters haven't been added yet'\n\n");
	}
	   x+=5.0+s;
	} }
}
